//
//  DeviceManager.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_DeviceManager_h
#define PDP_Term_Project_DeviceManager_h

#include <iostream>
#include <vector>
#include <thread>

#include "Tasks.h"
#include "CudaDevice.h"
#include "CudaDeviceFactory.h"

class DeviceManager {
private:
    std::vector<Device *> devices;
public:
    DeviceManager(int &argc, const char ** &argv)
    {
        // Create device contexts for each device
        int numDevices;
        cudaGetDeviceCount(&numDevices);
        
        // devices.resize(4);
        CudaDeviceFactory cudaDeviceFactory;
        for(int i = 0; i < numDevices; i++)
        {
            devices.push_back(cudaDeviceFactory.createDevice(i));
        }
        
        std::cout << devices.size() << std::endl;
        
        return;
    }
    
    const int getDeviceCount()
    {
        return (const int) devices.size();
    }

    Device * & getDevice(int deviceId)
    {
        return devices[deviceId];
    }
    
    const char * getDeviceType(int deviceId)
    {
        return devices[deviceId]->getDeviceType();
    }
};

#endif
