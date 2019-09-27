//
//  CBridge.h
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

#ifndef CBridge_h
#define CBridge_h
typedef void* CDogModel;
#ifdef __cplusplus
extern "C" {
#endif

    /**C方法
     */
    void printHellow(void);
    int getRandomInt(void);
    
    /**C++方法
     */
    CDogModel create();
    CDogModel createBy(const char* name,int age);
    void printDogInfo(CDogModel model);
    const char* getDogName(CDogModel model);
    void destoryModel(CDogModel model);

    /**
     C方法
     用Swift调用此方法
     测试C调用Swift方法是否成功
     ps:如果不调用此方法,如何测试C调用Swift方法成功?
     */
    void runSwiftFun(void);
    
    
#ifdef __cplusplus
}
#endif
#endif /* CBridge_h */

