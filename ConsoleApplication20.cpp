// ConsoleApplication20.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "请输入两个正整数" << endl;
    cin >> a >> b;
    if (a > b)
    {
        if (a % b == 0)
        {
            cout << "最小公倍数为" << a << endl;
        }
        else
        {
            cout << "最小公倍数为" << a * b << endl;
        }

    }
    else
    {
        if (b % a == 0)
        {
            cout << "最小公倍数为" << b << endl;
        }
        else
        {
            cout << "最小公倍数为" << a * b << endl;
        }

    }
    if (a > b)
    {
        if (a % b == 0)
        {
            cout << "最大公因数为" << b << endl;
        }
        else
        {
            cout << "最大公因数为" << "1" << endl;
        }

    }
    else
    {
        if (b % a == 0)
        {
            cout << "最大公因数为" << a << endl;
        }
        else
        {
            cout << "最大公因数为" << "1" << endl;
        }

    }
}

