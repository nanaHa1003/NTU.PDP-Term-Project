
//
//  Point.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Point_h
#define PDP_Term_Project_Point_h

struct Point {};

struct PointReal2D : Point
{
    float x;
    float y;
};

struct PointReal3D : Point
{
    float x;
    float y;
    float z;
};

#endif
