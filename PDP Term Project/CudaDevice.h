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

static const char DeviceType[] = "CudaDevice";

class CudaDevice : public Device {
public:
    CudaDevice(int deviceID) : Device(deviceID)
    {
        // Create context for selected device
        cudaSetDevice(this->deviceID);
        cudaFree(nullptr);
    }

    const char *getDeviceType()
    {
        return DeviceType;
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
        
    }

    // Override
    void syncDevice()
    {
        cudaSetDevice(this->deviceID);
        cudaDeviceSynchronize();
    }
};

#endif
