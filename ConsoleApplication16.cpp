// ConsoleApplication16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三边长" << endl;
	cin >> a >> b >> c;
	int C;
	if ((a + b) > c)
	{
		if ((a - b) < c)
		{
			C = a + b + c;
			cout << "三角形的周长为" << C << endl;
		}
		else
		{
			cout << "不能构成三角形" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}
	if (a = b)
	{
		cout << "等腰三角形" << endl;
	}
	if (a = c)
	{
		cout << "等腰三角形" << endl;
	}
	if (b = c)
	{
		cout << "等腰三角形" << endl;
	}
}