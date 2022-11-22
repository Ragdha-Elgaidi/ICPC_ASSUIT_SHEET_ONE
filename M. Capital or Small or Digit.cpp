    #include <iostream>
    #include <string>
    using namespace std;
    int main()
    {
    	char X;
    	cin >> X;
    	if (X >= 48 && X <= 57)
    	{
    		cout << "IS DIGIT" << endl;
    	}
    	else if (X >= 65 && X <= 90)
    	{
    		cout << "ALPHA" << "\n" <<
    			"IS CAPITAL" << endl;
    	}
    	else if (X >= 97 && X <= 122)
    	{
    		cout << "ALPHA" << "\n" <<
    			"IS SMALL" << endl;
    	}
    }
