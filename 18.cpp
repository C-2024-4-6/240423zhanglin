// 18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "请输入一个字符" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
		cout << a << endl;

	}
	else {
		cout << static_cast<int>(a + 1) << endl;
	}
}

