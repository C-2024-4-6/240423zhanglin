// ConsoleApplication44.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Time
{
private:	int hour;
	int minute;
	int sec;
public:
	Time()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
		cout << hour << ";" << minute << ";" << sec << endl;
	}
};
int main()
{
	
	Time t1;
	Time();
}

