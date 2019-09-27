//
//  DogModel.cpp
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

#include "DogModel.hpp"
#include "CBridge.h"

DogModel::DogModel(){
    this->name = "旺财";
    this->age = 20;
}

DogModel::DogModel(const char * name,int age){
    this->name = name;
    this->age = age;
}

void DogModel::printDogInfo(){
    cout << "i am is " << name << ",my age is "<< age;
    cout << "\n";
}
const char* DogModel::getDogName() {
    return name.data();
}

DogModel::~DogModel(){
    cout << "\n释放资源\n";
}


// MARK: - 实现接口函数

CDogModel create() {
    return new DogModel();
}
CDogModel createBy(const char* name,int age){
    return new DogModel(name,age);
}
void printDogInfo(CDogModel model) {
    DogModel *p = (DogModel*)model;
    p->printDogInfo();
}
const char* getDogName(CDogModel model){
    DogModel *p = (DogModel*)model;
    return p->getDogName();
}
void destoryModel(CDogModel model){
    DogModel *p = (DogModel*)model;
    delete p;
}
