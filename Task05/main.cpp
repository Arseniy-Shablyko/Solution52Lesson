#include <iostream>
using namespace std;

bool is_power_of_three(int number);

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << (is_power_of_three(number) ? "Yes" : "No");

	return 0;
}

bool is_power_of_three(int number) {
	if (number <= 0) {
		return false;
	}

	if (number == 1) {
		return true;
	}

	if (number % 3 != 0) {
		return false;
	}

	return is_power_of_three(number / 3);
}