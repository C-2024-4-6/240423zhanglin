// ConsoleApplication38.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
double swap(double a[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int n = 0; n < 9; n++)
        {
            if (a[n] >a[n + 1])
            {
                double temp;
                temp = a[n];
                a[n] = a[n + 1];
                a[n + 1] = temp;



            }
        }
    }
    for (int m = 0; m < 10; m++)
    {
        cout << a[m] << '\t';
    }
    return 0;
}
int main()
{
    double b[10] = { 7,8,9,6,5,3,4,2,1,10};
    swap(b);
}
