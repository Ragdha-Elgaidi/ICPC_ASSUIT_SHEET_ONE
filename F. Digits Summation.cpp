#include <iostream>
using namespace std;
int main()
{ 
	long long num1, num2;
	cin >> num1 >> num2;
	int last_digit_of_num1 = num1 % 10;
	int last_digit_of_num2 = num2 % 10;
	cout << last_digit_of_num1 + last_digit_of_num2 << endl;
	return 0;
}
