#include <iostream>

using namespace::std;

int main() {
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Введите свой возраст\n";
	cin >> n;
	if (n > 0 && n < 101) {
		cout << "Вам " << n;
		if (1 == n % 2 && n != 11)  cout << " Год\n";
		else if (n > 4 && n < 21)  cout << " Лет\n";
		else cout << " Года\n";
	}

	else
		cout << "ERROR\n";
	system("pause");
}