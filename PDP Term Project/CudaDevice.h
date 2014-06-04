//
//  CudaDevice.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_CudaDevice_h
#define PDP_Term_Project_CudaDevice_h

#include "Device.h"

static const char DeviceType[] = "CudaDevice";

class CudaDevice : public Device {
public:
    CudaDevice(int deviceID)
    : Device(deviceID)
    {
        return;
    }

    static const char *getDeviceType()
    {
        return DeviceType;
    }
    
    void *malloc(size_t size)
    {
        return nullptr;
    }

    void free(void *ptr)
    {
        return;
    }
};

#endif
