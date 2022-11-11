#include <iostream>
using namespace std;

int main()
{
	long long num1, num2 , num3;
	cin >> num1>>num2>>num3;
	if ((num1 <= num2) && (num1 <= num3))
	{
		if (num2 <= num3)
		{
			cout << num1 << "\n" << num2 << "\n" << num3 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
		else
		{
			cout << num1 << "\n" << num3 << "\n" << num2 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
	}
	else if ((num2 <= num1) && (num2 <= num3))
	{
		if (num1 <= num3)
		{
			cout << num2 << "\n" << num1 << "\n" << num3 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
		else
		{
			cout << num2 << "\n" << num3 << "\n" << num1 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
	}
	else if ((num3 <= num1) && (num3 <= num2))
	{
		if (num1 <= num2)
		{
			cout << num3 << "\n" << num1 << "\n" << num2 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
		else
		{
			cout << num3 << "\n" << num2 << "\n" << num1 << endl;
			cout << "\n" << num1 << "\n" << num2 << "\n" << num3;
		}
	}
	return 0;

}
