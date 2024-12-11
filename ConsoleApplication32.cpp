// ConsoleApplication32.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<int>s;
	int a;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		s.insert(a);
	}
	for (int n : s)
	{
		int arr[] = { n };
		cout << n << endl;
	}
}
