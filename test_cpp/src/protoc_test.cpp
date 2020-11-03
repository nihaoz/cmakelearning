/*
 * @Author: TICA:zyh
 * @Date: 2020-11-03 19:24:31
 * @LastEditor: TICA:zyh
 * @LastEditTime: 2020-11-03 19:29:04
 * @FilePath: /cmakelearning/test_cpp/src/protoc_test.cpp
 * @Email: 369023466@qq.com
 */
#include<iostream>
#include<string>
#include"../protoc/addressbook.pb.h"
using namespace tutorial;
using namespace std;

int main()
{
    Account account;
    account.set_id(1000);
    account.set_name("name");
    account.set_password("password");

    std::string s = account.SerializeAsString();
    if(s.size() == 0)
    {
        cout << "error int SerializeAsString" <<endl;
    }
    Account nAccount;
    if(nAccount.ParseFromString(s))
    {
        cout << nAccount.id()<<endl;
        cout << nAccount.name()<<endl;
        cout << nAccount.password()<<endl;
    }
    else
    {
        cout <<"error in ParseFromString"<<endl;
    }
    return 0;
}
    