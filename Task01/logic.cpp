#include "logic.h"

string s = "";

long long factorial(int number) {
	s += "   ";
	cout << s << "Start function with number = "
		<< number << endl;

	if (number < 0) {
		return -1;
	}

	if (number <= 1) {
		cout << s << "End function with number = "
			<< number << ", Result  = 1" << endl;
		s.resize(s.length() - 3);
		return 1;
	}

	int result = factorial(number - 1) * number;

	
	cout << s << "End function with number = "
		<< number << ", Result  = "
		<< result << endl;
	s.resize(s.length() - 3);
	return result;
}