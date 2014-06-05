//
//  CudaDevice.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_CudaDevice_h
#define PDP_Term_Project_CudaDevice_h

#include <iostream>

#include "cuda.h"
#include "cuda_runtime.h"
#include "Device.h"

static const char CudaDeviceType[] = "CudaDevice";
static void runTask(Task *task)
{
    if(task != nullptr)
    {
        task->execute();
    }
}

class CudaDevice : public Device {
private:
    Task *task;
    std::thread localWorker;
public:
    CudaDevice(int deviceID) : Device(deviceID)
    {
        // Create context for selected device
        cudaSetDevice(this->deviceID);
        cudaFree(nullptr);
    }

    const char *getDeviceType()
    {
        return CudaDeviceType;
    }
    
    // Override
    void *malloc(size_t size)
    {
        char *tmp;
        cudaError_t err = cudaMalloc(&tmp, size);
        if(err != cudaSuccess)
        {
            std::cout << cudaGetErrorString(err) << std::endl;
            return nullptr;
        }
        
        return tmp;
    }
    
    // Override
    void free(void *ptr)
    {
        cudaError_t err = cudaFree(ptr);
        if(err != cudaSuccess)
        {
            std::cout << cudaGetErrorString(err) << std::endl;
        }
    }
    
    // Override
    void submit(Task *task)
    {
        if(task != nullptr)
        {
            this->syncDevice();
        }

        this->task  = task;
        cudaSetDevice(this->deviceID);
        localWorker = std::thread(runTask, task);
    }

    // Override
    void syncDevice()
    {
        // Wait for thread termination
        localWorker.join();
        
        // Wait for cuda device
        cudaSetDevice(this->deviceID);
        cudaDeviceSynchronize();
        
        // Clean up
        task = nullptr;
    }

    // Helper functions
    static void *hostMalloc(size_t size)
    {
        char *tmp;
        cudaError_t err =cudaMallocHost(&tmp, size);
        if(err != cudaSuccess)
        {
            std::cout << cudaGetErrorString(err) << std::endl;
        }
        
        return tmp;
    }
    
    static void memcpyToDevice(void *dst, void *src, size_t size)
    {
        cudaError_t err = cudaMemcpy(dst, src, size, cudaMemcpyHostToDevice);
        if(err != cudaSuccess)
        {
            std::cout << cudaGetErrorString(err) << std::endl;
        }
    }

    static void memcpyToHost(void *dst, void *src, size_t size)
    {
        cudaError_t err = cudaMemcpy(dst, src, size, cudaMemcpyDeviceToHost);
        if(err != cudaSuccess)
        {
            std::cout << cudaGetErrorString(err) << std::endl;
        }
    }
};

#endif
