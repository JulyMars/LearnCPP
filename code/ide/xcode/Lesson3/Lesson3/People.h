//
//  People.h
//  Lesson3
//
//  Created by wangxiong1 on 15/8/21.
//  Copyright (c) 2015年 wangxiong. All rights reserved.
//

#ifndef __Lesson3__People__
#define __Lesson3__People__

#include <stdio.h>

class People{
private:
    int age;
    int sex;
public:
    People();
    People(int age, int sex);
    int getAge();
    int getSex();
    void sayHello();
};

#endif /* defined(__Lesson3__People__) */
