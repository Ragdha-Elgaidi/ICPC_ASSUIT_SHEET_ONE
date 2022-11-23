#include <iostream>
using namespace std;
int main()
{
	long long X;
	cin>>X;
	int years =  X/ 365;
	X -= years * 365;
	int months = X / 30;
	X -= months * 30;
	cout << years << " years" << endl;
	cout << months << " months" << endl;
	cout << X << " days" << endl;
	
}
