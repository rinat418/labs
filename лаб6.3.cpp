#include <iostream>
using namespace std;

long int f(void)
{
    int n;
    long int s = 0, b = 1;

    for (n = 1; n <= 15; n++)
    {
        b *= n;
        s += b;
    }
    return s;
}

int main()
{
    cout << "Result = " << f() << '\n';
    return 0;
}