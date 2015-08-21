//
//  People.cpp
//  Lesson3
//
//  Created by wangxiong1 on 15/8/21.
//  Copyright (c) 2015年 wangxiong. All rights reserved.
//

#include "People.h"

People::People(){
    
}

People::People(int age, int sex){
    this->age=age;
    this->sex=sex;
}

int People::getAge(){
    return this->age;
}

int People::getSex(){
    return this->sex;
}

void People::sayHello()
{
    printf("Hello People.");
}