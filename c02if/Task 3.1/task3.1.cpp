#include <iostream>

using namespace::std;

int main() {
	int n;
	cin >> n;
	setlocale(LC_ALL, "Russian");
	switch (n) {
		case 1:cout << "������\n"; break;
		case 2:cout << "�������\n"; break;
		case 3:cout << "����\n"; break;
		case 4:cout << "������\n"; break;
		case 5:cout << "���\n"; break;
		case 6:cout << "����\n"; break;
		case 7:cout << "����\n"; break;
		case 8:cout << "������\n"; break;
		case 9:cout << "��������\n"; break;
		case 10:cout << "�������\n"; break;
		case 11:cout << "������\n"; break;
		case 12:cout << "�������\n"; break;
		default:cout << "ERROR\n"; break;
	}
}