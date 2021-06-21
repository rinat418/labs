#include <iostream> 
#include <conio.h>
using namespace std;
int main()
{
	const float Pi = 3.1415926;
	int R, r;
	float S;
	cout << "enter r and R\n";
	cin >> r >> R;

	S = Pi * (R * R - r * r);

	cout << "S=" << S << "\n";
	return 0;
}