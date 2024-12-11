// ConsoleApplication34.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
bool is_prime(int mum);
int main()
{
	int n = 0;
	for(int i=2;n<=200;i++)
		if (is_prime(i))
		{
			cout << i << "  ";
			if (++n % 10 == 0)
			{
				cout << endl;
			}
	}
}
	bool is_prime(int num)
	{
		if (num < 15)
		{
			if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		return 0;
	}