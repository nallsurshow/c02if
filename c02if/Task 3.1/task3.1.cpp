#include <iostream>

using namespace::std;

int main() {
	int n;
	cin >> n;
	setlocale(LC_ALL, "Russian");
	switch (n) {
		case 1:cout << "€нварь\n"; break;
		case 2:cout << "февраль\n"; break;
		case 3:cout << "март\n"; break;
		case 4:cout << "апрель\n"; break;
		case 5:cout << "май\n"; break;
		case 6:cout << "июнь\n"; break;
		case 7:cout << "июль\n"; break;
		case 8:cout << "август\n"; break;
		case 9:cout << "сент€брь\n"; break;
		case 10:cout << "окт€брь\n"; break;
		case 11:cout << "но€брь\n"; break;
		case 12:cout << "декабрь\n"; break;
		default:cout << "ERROR\n"; break;
	}
}