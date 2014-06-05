//
//  Client.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Client_h
#define PDP_Term_Project_Client_h

#include "ListReader.h"
#include "DeviceManager.h"
#include "Tasks.h"

class Client {
private:
    // Arguments
    const char *filename;
    
    int size;
    int *points;
    DeviceManager *deviceManager;
    
public:
    Client(int &argc, const char ** &argv)
    {
        // Parese arguments and set variables
        if(argc < 2)
        {
            // Print help
            return;
        }
        
        this->filename = argv[1];
        this->deviceManager = new DeviceManager(argc, argv);
    }
    
    int exec()
    {
        ListReader listReader;
        size = listReader.read(filename, points);

        for(int i = 0; i < size; i++)
        {
            std::cout << points[i] << std::endl;
        }

        return 0;
    }
};

#endif
