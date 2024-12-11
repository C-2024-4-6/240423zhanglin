// ConsoleApplication30.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    double a[10] = { 10,9,8,7,6,5,4,3,2,1 };
    for (int i = 0; i < 10; i++)
    {
        for (int m = 0; m < 9 - i; m++)
        {
            if (a[m] > a[m + 1])
            {
                int temp;
                temp = a[m];
                a[m] = a[m + 1];
                a[m + 1] = temp;
            }
        }
    }
    for (int n = 0; n < 10; n++)
    {
        cout << a[n] << endl;
    }
}

