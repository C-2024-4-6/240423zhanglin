// ConsoleApplication48.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class point
{
private:
    int x;
    int y;
public:
    point()
    {
        x = 60;
        y = 80;
    }
  /*  ~point()
    {
        cout << "这是一个析构函数" << endl;
    }*/
    void setpoint(int i,int j)
    {
        x = 60 + i;
        y = 80 + j;
    }
    void display()
    {
        cout << x << endl;
        cout << y << endl;
    }
};
int main()
{
    point p;
    p.setpoint(9, 9);
    p.display();
        ;
}

