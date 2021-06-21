#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 7;
    int b = 2;
    int c = 4;
    int sum = 0;
    int summint;
    cout << "¬водим кол-во минут  "; cin >> summint;
    if (summint < a)
    {
        sum = summint * b;
        cout << sum << endl;
    }
    else
    {
        sum = summint * c;
        cout << sum << endl;
    }
}