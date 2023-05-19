#include<iostream>
using namespace std;

int main()
{
	int a = 5;

	/*if (a < 10)
	{
		cout << "a < 10" << endl;
	}
	else
	{
		if (a == 10)
		{
			cout << "a = 10" << endl;
		}
		else
		{
			cout << "a > 10" << endl;
		}
	}*/

	(a < 10) ? (cout << "a < 10" << endl) : (a > 10) ? (cout << "a > 10" << endl) : (cout << "a = 10" << endl);
}