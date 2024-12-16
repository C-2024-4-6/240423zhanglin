// ConsoleApplication47.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    int score;
    Student(int _id, int _score)
    {
        id = _id;
        score = _score;
    }

   
    
};
void max(Student* s, int size)
{
    int maxscore = s[0].score;
    int maxid = s[0].id;
    for (int i = 0; i < size; i++)
    {
        if (s[i].score > maxscore)
        {
            maxscore = s[i].score;
            maxid = s[i].id;

        }
    }
    cout << maxid << endl;
}

int main()
{
    Student s[5] = {
        Student(1,100),
        Student(2,99),
        Student(3,98),
        Student(4,97),
        Student(5,96)

    };
    max(s, 5);
}
    