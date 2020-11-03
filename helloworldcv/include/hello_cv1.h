/*
 * @Author: TICA:zyh
 * @Date: 2020-10-27 18:30:25
 * @LastEditor: TICA:zyh
 * @LastEditTime: 2020-10-27 18:33:32
 * @FilePath: /cmakelearning/helloworldcv/include/hello_cv1.h
 * @Email: 369023466@qq.com
 */
#ifndef HEOLLO_CV_1_H_
#define HEOLLO_CV_1_H_
#include<string>
#include<iostream>

namespace hello_cv_1
{
    class HelloCv_1
    {
    public:
        HelloCv_1();
        ~HelloCv_1();
        std::string getMsgContent(std::string say_something); 
    private:
        std::string say_somthing;
    };
} // n;amespace hello_cv_1


#endif