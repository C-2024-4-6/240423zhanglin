// ConsoleApplication27.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void a(int& a, int& b)
{

	if (a <= b)
	{
		if (b % a == 0)
		{
			cout << a << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}
	if (a > b)
	{
		if (a % b == 0)
		{
			cout << b << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}

	if (a >= b)
	{
		if (a % b == 0)
		{
			cout << a << endl;
		}
		else
		{
			cout << b * a << endl;
		}
	}
	else
	{
		if (b % a == 0)
		{
			cout << b << endl;
		}
		else
		{
			cout << b * a << endl;
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	a(m, n);
}

