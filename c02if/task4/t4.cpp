#include <iostream>

using namespace::std;

int main() {
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "������� ���� �������\n";
	cin >> n;
	if (n > 0 && n < 101) {
		cout << "��� " << n;
		if (1 == n % 2 && n != 11)  cout << " ���\n";
		else if (n > 4 && n < 21)  cout << " ���\n";
		else cout << " ����\n";
	}

	else
		cout << "ERROR\n";
	system("pause");
}