//
//  CTest.c
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

#include "CTest.h"
#include <stdlib.h>
void printHellow(void){
    printf("hellow world,I am is C language\n");
}

int getRandomInt(void){
    return rand();
}
/**该方法用于Swift调用,用于测试函数中调用Swift方法是否成功*/
void runSwiftFun(void){
    /**实现中,调用Swift函数*/
    swiftFuncIMP(10);
}
