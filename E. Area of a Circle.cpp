#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	float R;
	double pi = 3.141592653;
	cin >> R;
	cout << fixed << setprecision(9) << endl;
	cout  <<pi*R*R << endl;
	return 0;
}
