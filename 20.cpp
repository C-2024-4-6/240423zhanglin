// 20.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n <= i; n++)
        {
            cout << "*";
        }
       cout<<endl;
    }
}

