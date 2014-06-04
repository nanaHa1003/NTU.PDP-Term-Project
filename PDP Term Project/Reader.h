//
//  Reader.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/4.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Reader_h
#define PDP_Term_Project_Reader_h

class Reader {
public:
    virtual int read(const char *filename, int * &points)
    {
        return 0;
    }
};

#endif
