//
//  main.cpp
//  Lesson2
//
//  Created by wangxiong1 on 15/8/20.
//  Copyright (c) 2015年 wangxiong. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace wx;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}
