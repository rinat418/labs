#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int a, r;
	cout << "a=";
	cin >> a;
	cout << "r=";
	cin >> r;
	if (a <= r * r * r)
		cout << "True" << endl;
	else
		cout << "False" << endl;
	system("PAUSE");
	return 0;
}