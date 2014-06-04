//
//  CudaDeviceFactory.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_CudaDeviceFactory_h
#define PDP_Term_Project_CudaDeviceFactory_h

#include "CudaDevice.h"
#include "DeviceFactory.h"

class CudaDeviceFactory : public DeviceFactory {
    // Override
    Device * createDevice(int deviceId)
    {
        return new CudaDevice(deviceId);
    }
};

#endif
