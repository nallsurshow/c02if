#include <iostream>

int main() {
	char n;
	std::cout << "Enter a symbol\n";
	std::cin >> n;
	if (n >= '0' && n <= '9')
		std::cout << "DIGIT\n";

	else if ((n >= 'A') && (n <= 'Z'))
		std::cout << "CAPITAL\n";

	else if ((n >= 'a') && (n <= 'z'))
		std::cout << "LOWERCASE\n";

	else 
		std::cout << "NON-ALPHANUMERIC\n";
	system("pause");
}