// ConsoleApplication35.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double a, b, c;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	is_valid(a, b, c);
	if (is_valid(a, b, c))
	{
		double area = double_area(a, b, c);
		double_area(a, b, c);
	}
}

