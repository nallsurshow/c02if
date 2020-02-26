#include <iostream>

using namespace::std;

int main() {
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1>> x2 >> y2 >> x3 >> y3;
	if ((sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) == sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2))) && (sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)) == sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))))
		cout << ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3))/2;
	else cout << -1;

	system("pause");
}