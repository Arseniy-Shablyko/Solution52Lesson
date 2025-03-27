#include "logic.h"
void test(int count) {
	count++;
	cout << count << endl;
	test(count);
}

int main() {
	factorial(7);
	test(0);

	return 0;
}