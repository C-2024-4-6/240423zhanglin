// ConsoleApplication19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
    double h = 0;
    cout << "请输入华氏温度" << endl;
    cin >> h;
    double s = 0;
    s = (h - 32) * 5 / 9;
    cout << "摄氏温度为" <<fixed<<setprecision(2)<< s << endl;

}
