#include <iostream>
using namespace std;

int sum_of_number_digit(int number);

int main() {
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << sum_of_number_digit(number);

	return 0;
}

int sum_of_number_digit(int number) {
	number = number < 0 ? -number : number;

	if (number < 10) {
		return number;
	}

	return sum_of_number_digit(number / 10) + number % 10;
}