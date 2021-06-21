#include <iostream> 
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (c * c == a * a + b * b)
		cout << "true";
	else
		cout << "false";
}