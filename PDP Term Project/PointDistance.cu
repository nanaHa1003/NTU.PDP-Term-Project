//
//  PointDistance.cu
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/4
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#include <cuda.h>
#include <cuda_runtime.h>

#include "Point.h"
#include "PointSet.h"
#include "PointDistance.h"

__device__ float norm(struct PointReal2D a, struct PointReal2D b)
{
    float ret = 0.0f;
    ret += (a.x - b.x) * (a.x - b.x);
    ret += (a.y - b.y) * (a.y - b.y);

    return sqrtf(ret);
}

__device__ float norm(struct PointReal3D a, struct PointReal3D b)
{
    float ret = 0.0f;
    ret += (a.x - b.x) * (a.x - b.x);
    ret += (a.y - b.y) * (a.y - b.y);
    ret += (a.z - b.z) * (a.z - b.z);

    return sqrtf(ret);
}

// Kernel for PointReal2D

// Kernel for PointReal3D

int BlockPointDistance(PointSet pointSet, float *deviceArray,
                       int hBegin, int hEnd, int vBegin, int vEnd)
{


    return 0;
}

