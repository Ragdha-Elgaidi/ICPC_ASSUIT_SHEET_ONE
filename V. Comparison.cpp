#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	char com;
	cin >> a >> com >> b ;
	switch (com)
	{
	    case '>':
			if (a>b)
				cout << "Right" << endl;
			else
				cout << "Wrong" << endl;
			break;
		case '<':
			if (a < b)
				cout << "Right" << endl;
			else
				cout << "Wrong" << endl;
			break;
		case '=':
			if (a == b)
				cout << "Right" << endl;
			else
				cout << "Wrong" << endl;
			break;
	}

	return 0;
}
