// 19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    double b = 0;
    int c = 0;
    for (; a <= 100; a *= 2)
    {
        b += a * 0.8;
        c++;
    }
    double d = b / c;
    cout << d << endl;
}
