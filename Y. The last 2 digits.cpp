#include <iostream>
using namespace std;

int main()
{ 
	long long num1, num2,num3,num4;
	cin >> num1 >> num2>>num3>>num4;
	num1 %= 100;
	num2 %= 100;
	num3 %= 100;
	num4 %= 100;
	long long result = num1*num2*num3*num4;
	result %= 100;
	if (result < 10)
	{
		cout <<0 << result << endl;
	}
	else
		cout << result << endl;

	return 0;
}
