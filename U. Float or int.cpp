#include <iostream>
using namespace std;

int main()
{
	double num;
	cin >> num;
	int num1 = num;
	double res = num - num1;
	if (res != 0)
		cout << "float " << num1 << " " << res<<endl;
	else
		cout << "int " << num1 <<endl;

}
