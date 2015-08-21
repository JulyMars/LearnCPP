//
//  main.cpp
//  Lesson3
//
//  Created by wangxiong1 on 15/8/21.
//  Copyright (c) 2015年 wangxiong. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    Man *m = new Man();
    m->getAge();
    m->sayHello();
    return 0;
}
