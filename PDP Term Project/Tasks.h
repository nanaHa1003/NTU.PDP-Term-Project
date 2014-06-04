//
//  Tasks.h
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/5.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#ifndef PDP_Term_Project_Tasks_h
#define PDP_Term_Project_Tasks_h

class TaskOptions {};

class TaskResults {};

class Task {
protected:
    TaskOptions options;
public:
    Task(TaskOptions taskOptions);
    TaskResults execute();
};

#endif
