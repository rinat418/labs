#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y, res;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	res = ((1 + (1 / (x ^ 2))) ^ x) - 12 * x ^ 2 * y;
	cout << "res = " << res << "\n";
	cin.get();
	return 0;
}