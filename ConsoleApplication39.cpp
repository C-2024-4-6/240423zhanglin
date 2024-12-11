// ConsoleApplication39.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int* f()
{
	
	int* list = new int[4];
	for (int i = 0; i < 4; i++)
	{
		list[i] = i;
	}
	return list;
}
	

	
	void main()
	{
		int* p = f();
		cout << p[0] << endl;
		cout << p[1] << endl;
		delete[]p;
	}


