//
//  CTest.h
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

#ifndef CTest_h
#define CTest_h

#include <stdio.h>

void(^ __nonnull swiftFuncIMP)(int) = NULL;

void printHellow(void);
int getRandomInt(void);
void runSwiftFun(void);
#endif /* CTest_h */
