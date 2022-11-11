#include <iostream>
using namespace std;

int main()
{
	long long a, b, r;
	char op, opr;
	int myr;
	cin >> a >> op >> b >> opr >> r;
	switch (op)
	{
	    case '+':
			myr = a + b;
			if (myr == r)
				cout << "Yes" << endl;
			else
				cout << myr << endl;
			break;
		case '-':
			myr = a - b;
			if (myr == r)
				cout << "Yes" << endl;
			else
				cout << myr << endl;
			break;
		case '*':
			myr = a * b;
			if (myr == r)
				cout << "Yes" << endl;
			else
				cout << myr << endl;
			break;
	}

	return 0;
}
