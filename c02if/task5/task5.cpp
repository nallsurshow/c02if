#include <iostream>

using namespace::std;

int main() { 
	char n;
	setlocale(LC_ALL, "Russian");
	cout << "������� �����\n";
	cin >> n;
	switch (n) {
		case '0':cout << "ZERO\n"; break;
		case '1':cout << "ONE\n"; break;
		case '2':cout << "TWO\n"; break;
		case '3':cout << "THREE\n"; break;
		case '4':cout << "FOUR\n"; break;
		case '5':cout << "FIVE\n"; break;
		case '6':cout << "SIX\n"; break;
		case '7':cout << "SEVEN\n"; break;
		case '8':cout << "EIGHT\n"; break;
		case '9':cout << "NINE\n"; break;
		default: cout << "ERROR\n"; break;
	}
	system("pause");

}