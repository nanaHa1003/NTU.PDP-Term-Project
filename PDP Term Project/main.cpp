//
//  main.cpp
//  PDP Term Project
//
//  Created by Po-Chuan Wang on 2014/6/4.
//  Copyright (c) 2014年 COLA Lab. All rights reserved.
//

#include <iostream>
#include "Client.h"

int main(int argc, const char ** argv)
{
    Client client(argc, argv);
    return client.exec();
}

