#include <iostream>
#include <string>
using namespace std;
int main()
{
	char X;
	cin >> X;
	
    if (X >= 65 && X <= 90)
	{
		X =X + 32;
		cout << X << endl;
	}
	else if (X >= 97 && X <= 122)
	{
		X = X -32;
		cout << X << endl;
	}
}
