// ConsoleApplication37.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    cout << (int)hexString << endl;
    return 165;
}

int main()
{
    char a = 'A5';
    const char* const hexString = &a;
    parseHex(hexString);

}
