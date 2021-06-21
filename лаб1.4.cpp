#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;

	if (x < 2 or x>6) cout << "false";
	if (x >= 2 and x <= 6) //2 kv
	{
		if (x * x + y * y <= 36) cout << "true";
		else cout << "false";
	}
	return 0;
}