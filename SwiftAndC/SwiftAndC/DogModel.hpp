//
//  DogModel.hpp
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

#ifndef DogModel_hpp
#define DogModel_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class DogModel{
    string name;
    int age;
public:
    DogModel();
    DogModel(const char * name, int age);
    ~DogModel();
    void printDogInfo();
    const char* getDogName();
};

#endif /* DogModel_hpp */
