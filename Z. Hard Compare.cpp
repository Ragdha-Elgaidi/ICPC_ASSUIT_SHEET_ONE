#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
	long long num1, num2,num3,num4;
	cin >> num1 >> num2>>num3>>num4;
	if (num2*log(num1)>num4*log(num3))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
