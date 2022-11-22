#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	char S;
	long long A, B;
	cin >> A>>S>>B;
	switch (S)
	{
	case '+':
		cout << A + B << endl;
		break;
	case '*':
		cout << A * B << endl;
		break;
	case '/':
		cout <<floor( A / B) << endl;
		break;
	case '-':
		cout << A - B << endl;
		break;
	}
}
