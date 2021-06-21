#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите год:____\b\b\b\b";
    int year;
    cin >> year;
    switch (year % 12)
    {
    case 0: cout << "Год Обезьяны" << endl; break;
    case 1: cout << "Год Петуха" << endl; break;
    case 2: cout << "Год Собаки" << endl; break;
    case 3: cout << "Год Свиньи" << endl; break;
    case 4: cout << "Год Крысы" << endl; break;
    case 5: cout << "Год Коровы" << endl; break;
    case 6: cout << "Год Тигра" << endl; break;
    case 7: cout << "Год Зайца" << endl; break;
    case 8: cout << "Год Дракона" << endl; break;
    case 9: cout << "Год Змеи" << endl; break;
    case 10: cout << "Год Лошади" << endl; break;
    case 11: cout << "Год Овцы" << endl; break;
    }

    system("pause");
    return 0;
}