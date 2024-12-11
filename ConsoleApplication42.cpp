// ConsoleApplication42.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
int f(const char s[])
{
	int a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return a;
}
int indexof(const char s1[], const char s2[])
{
	int l1 = f(s1);
	int l2 = f(s2);
	for (int i = 0; i < l2-l1; i++)
	{
		int j;
		for ( j = 0; j < l1; j++)
		
			if (s2[i + j] != s1[j])
			{
				break;
			}
		if (j == l1)return i;
		else return -1;
	
	}
	
}
int main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	int b = indexof(s1, s2);
	if (b != -1)
	{
		cout << b << endl;

	}
	else
	{
		cout << "no" << endl;
	}
}

