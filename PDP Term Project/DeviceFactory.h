//
//  DeviceFactory.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_DeviceFactory_h
#define PDP_Term_Project_DeviceFactory_h

#include "Device.h"

class DeviceFactory {
    virtual Device * createDevice(int deviceId) = 0;
};

#endif
