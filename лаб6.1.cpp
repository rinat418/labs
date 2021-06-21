#include <iostream>
#include <cmath>
#include <process.h>

using namespace std;

//---------------------------------------------

class fraction
{
private:
    int chis;
    int znam;
public:
    fraction() : chis(0), znam(1)
    {  }
    fraction(int ch, int zn) : chis(ch), znam(zn)
    {  }
    void getfrac()
    {
        cout << "Введите числитель: "; cin >> chis;
        while (true)
        {
            cout << "Введите знаменатель: "; cin >> znam;
            if (znam == 0)
                cout << "Попытка деления на 0!!!\n";
            else
                break;
        }
    }
    void showfrac() const
    {
        cout << chis << '/' << znam;
    }
    fraction operator / (const fraction& f1) const
    {
        int chtemp = chis * f1.znam;
        int zntemp = znam * f1.chis;
        return lowterms(fraction(chtemp, zntemp));
    }
    fraction lowterms(fraction) const;
};

fraction fraction::lowterms(fraction f1) const
{
    int chtemp, zntemp, temp;
    chtemp = abs(f1.chis);
    zntemp = abs(f1.znam);
    if (zntemp == 0)
    {
        cout << "\nОшибка! Попытка деления на 0!!!\n";
        exit(1);
    }
    if (chtemp == 0)
    {
        return fraction(0, 1);
    }
    while (chtemp != 0)
    {
        if (chtemp < zntemp)
        {
            temp = chtemp; chtemp = zntemp; zntemp = temp;
        }
        chtemp -= zntemp;
    }
    return fraction(f1.chis / zntemp, f1.znam / zntemp);
}

//---------------------------------------------

int main()
{
    setlocale(LC_ALL, "Rus");
    fraction f1, f2, f3;
    cout << "Введите дробь f1:\n";
    f1.getfrac();
    cout << "Введите дробь f2:\n";
    f2.getfrac();
    f3 = f1 / f2;
    cout << "Результат деления f1 на f2: "; f3.showfrac();
    cout << endl;
    return 0;
}