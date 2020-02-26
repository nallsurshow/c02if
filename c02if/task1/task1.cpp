#include <iostream>
#include <cstdlib>

int main () {
	int n;
	std::cout << "Enter number" << std::endl;
	std::cin >> n;
	if (n>0)
		std::cout << "POL" << std::endl; 
	else if (n<0) 
		std::cout << "OTR" << std::endl;
	else 
		std::cout << "NUL" << std::endl;


	system ("pause");
}