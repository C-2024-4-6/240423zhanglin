// ConsoleApplication46.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void suan(double a,double b,double c)
{
	cout << a * b * c << endl;
}
class Cuboid
{
private:
	double length1;
	double width1;

	double height1;
	double length2;
	double width2;

	double height2;
	double length3;
	double width3;

	double height3;
public:
	Cuboid()
	{
		cout << "请输入第一个长方体的长宽高";
		cin >> length1 >> width1 >> height1;
		cout << "请输入第二长方体的长宽高";
		cin >> length2 >> width2 >> height2;
		cout << "请输入三长方体的长宽高";
		cin >> length3 >> width3 >> height3;
		cout << "第一个长方体的体积" << endl;
		suan(length1, width1, height1);
		cout << "第二个长方体的体积" << endl;
		suan(length2, width2, height2);
		cout << "第三个长方体的体积" << endl;
		suan(length3, width3, height3);
	}

};
int main()
{
	Cuboid();
}
