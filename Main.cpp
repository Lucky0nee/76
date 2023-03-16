#include <iostream>
#include <cmath>

int main() {
	int num1, num2, num3;
	std::cout << "Enter num #1: ";  std::cin >> num1;
	std::cout << "Enter num #2: ";  std::cin >> num2;
	std::cout << "Enter num #3: ";  std::cin >> num3;
	try {

	
	if (num1 == 0 || num2 == 0 || num3 == 0) {
		throw "Error #1";
	}

	if (num3 + num2 <= num1 || num1 + num3 <= num2 || num1 + num2 <= num3) {
		throw "Error #2";
	}

	double S = sqrt(((num1 + num2 + num3) / 2) * (((num1 + num2 + num3) / 2) - num1) * (((num1 + num2 + num3) / 2) - num2) * (((num1 + num2 + num3) / 2) - num3));

	std::cout << S;

	}
	catch (...) {
		std::cout << "Error!!!";
	}


	return 0;
}
