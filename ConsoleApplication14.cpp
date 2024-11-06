// ConsoleApplication14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int main()
{
	int a = 0;
	int b = 0;
	float pi = 3.14;
	cout << "请输入圆锥的半径"<<"      " << "请输入圆锥的高" << endl;
	cin >> a >> b;
	int m = a * a * b;
	cout << "圆锥的体积为" << pi * m*1 / 3 << endl;


}


