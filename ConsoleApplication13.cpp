// ConsoleApplication13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 1;
	i++;
	cout << i << endl;

	cout << "Welcome to C++" << endl;

	/*int a = 0;
	int b = 0;
	float pi = 3.14;
	cin >> a >> b;
	cout<<1/3pia*b*/
	cout << "char length" << sizeof(char) << endl;
	cout << "int length" << sizeof(int) << endl;
	unsigned int testUnint = 65534;
	cout << "output in unsigned int1 type" << testUnint << endl;
	cout << "output in char type" << static_cast<char>(testUnint) << endl;
	cout << "output in short type" << static_cast<short>(testUnint) << endl;
	cout << "output in int type" << static_cast<int>(testUnint) << endl;
	cout << "output in double type" << static_cast<double>(testUnint) << endl;
	cout << "output in double type" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "outout in Hex unsigned int type" << hex << testUnint << endl;
}


		




