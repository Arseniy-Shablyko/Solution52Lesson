#include <iostream>
using namespace std;

int cout_of_number_digit(int number);

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << cout_of_number_digit(number);

	return 0;
}

int cout_of_number_digit(int number) {
	number = number < 0 ? -number : number;

	if (number < 10) {
		return 1;
	}

	return cout_of_number_digit(number / 10) + 1;
}