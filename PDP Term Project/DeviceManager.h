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
// #include <mpi.h>

#include "Tasks.h"
#include "CudaDevice.h"
#include "CudaDeviceFactory.h"

class DeviceManager {
private:
    std::vector<Device *> devices;
public:
    DeviceManager(int &argc, const char ** &argv)
    {
        // MPI::Init(argc, (char **&) argv);
        
        // Create devices
        int numDevices;
        cudaGetDeviceCount(&numDevices);
        
        
        
        return;
    }
};

#endif
