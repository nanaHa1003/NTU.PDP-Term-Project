//
//  DeviceManager.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_DeviceManager_h
#define PDP_Term_Project_DeviceManager_h

#include <list>
#include <mpi.h>

#include "Device.h"
#include "CudaDevice.h"
#include "Tasks.h"

class DeviceManager {
private:
    std::list<Device> devices;
public:
    DeviceManager(int &argc, const char ** &argv)
    {
        // MPI_Init(&argc, &argv);
        devices.push_back(*(new CudaDevice()));
        
        return;
    }
};

#endif
