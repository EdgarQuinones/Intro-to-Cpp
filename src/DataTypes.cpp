#include <iostream>

int main() {
	double price = 99.99;
	float interestRate = 3.67f;
	long fileSize = 90000L;
	char letter = 'a';
	bool isValid = false;

	// Can use auto to guess type
	// Useful when working with more complex types 
	auto okay = false;
	auto let = 'b';

	// One more method, using brackets 
	// Will error check for mistakes, and set default value
	// Can also help handle errors in converting
	int number {};
	//std::cout << number;

	// Use quotes to read numbers easier
	int number2 = 1'000;

	std::cout << number2;

	return 0;
}