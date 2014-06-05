//
//  ListReader.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_ListReader_h
#define PDP_Term_Project_ListReader_h

#include <iostream>
#include <fstream>

#include "Reader.h"
#include "Point.h"

class ListReader : public Reader {

public:
    // Overriding
    int read(const char *filename, int * &points)
    {
        std::ifstream file(filename);
        if(!file.is_open())
        {
            points = nullptr;
            return 0;
        }
        
        int size;
        file >> size;
        points = new int[size];
        
        for(int i = 0; i < size; i++)
        {
            file >> points[i];
        }
        
        file.close();
        
        return size;
    }
};


#endif
