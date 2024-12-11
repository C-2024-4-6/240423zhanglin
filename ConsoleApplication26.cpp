

#include <iostream>
using namespace std;
void a(int a, int b)
{
	if (a <= b)
	{
		if (b % a == 0)
		{
			cout << a << endl;
		}
		else
		{
			cout << b << endl;
		}
	}
	if (a > b)
	{
		if (a%b == 0)
		{
			cout << b << endl;
		}
		else
		{
			cout << a << endl;
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	a(m, n);


}

