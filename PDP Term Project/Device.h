//
//  Device.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Device_h
#define PDP_Term_Project_Device_h

#include "Tasks.h"

class Device {
protected:
    int deviceID;
public:
    Device(int deviceID)
    {
        this->deviceID = deviceID;
    }

    virtual const char * getDeviceType() = 0;

    virtual void *malloc(size_t size) = 0;
    virtual void free(void *ptr)      = 0;
    virtual void submit(Task *task)   = 0;
    virtual void syncDevice()         = 0;
};

#endif
