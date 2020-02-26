#include <iostream>

using namespace::std;

int main() {
	int n;
	cout << "Enter a year from 1582 to 2200\n";
	cin >> n;

	if (n >= 1582 && n <= 2200) {
		if (n%4==0)
		cout << "LEAP\n";
		else 
		cout << "NORMAL\n";
	}
	else 
	cout << "ERROR\n";
	system("pause");
}