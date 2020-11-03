/*
 * @Author: TICA:zyh
 * @Date: 2020-10-27 18:30:39
 * @LastEditor: TICA:zyh
 * @LastEditTime: 2020-10-27 18:36:47
 * @FilePath: /cmakelearning/helloworldcv/src/main.cpp
 * @Email: 369023466@qq.com
 */
#include"hello_cv1.h"
#include<string>
#include<iostream>

int main()
{
    hello_cv_1::HelloCv_1 helloCv_1_;
    std::cout<<helloCv_1_.getMsgContent("hello opencv")<<std::endl;
}