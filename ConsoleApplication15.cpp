// ConsoleApplication15.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	float x;
	float y;
	cin >> x;
	if(x>0)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	
	}
	else if(x >=1)
	{

		y = 2 / 4 * x + 1;
		cout << y << endl;
		}
	else if (x >= 5)
	{

		y = x * x;
		cout << y << endl;
	}
}
