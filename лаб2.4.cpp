#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int x, y;
	cout << "¬ведите число x : "; cin >> x;
	if (x >= -3.5) {
		y = 4*x^2+3*x-19;
		cout << "y =4*x^2+3*x-19 = " << y << endl;

	}
	if (x < 3.5) {
		y = -2 * x / (-4 * x + 1);
		cout << "y =-2*x / (-4*x+1) = " << y << endl;
	}

	system("PAUSE");
	return 0;
}


