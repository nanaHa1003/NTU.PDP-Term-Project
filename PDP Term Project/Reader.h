//
//  Reader.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/4.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Reader_h
#define PDP_Term_Project_Reader_h

class AbstractReader {
public:
    virtual int * read(const char *filename)
    {
        return nullptr;
    }
};

#endif
