#include <iostream>

struct point // объ€вл€ем структуру point, имеющую два пол€ x и y типа double
{
    double x; // обращение к элементу пол€ будет такое: point_name.x
    double y; // обращение к элементу пол€ будет такое: point_name.y
};

bool foo(point p[]) // функци€ foo принимает в качестве параметра массив структурных элементов типа point и возвращает булевую переменную
{
    int a = (p[1].x - p[0].x) * (p[2].y - p[1].y) * (p[1].y - p[0].y),
        b = (p[2].x - p[0].x) * (p[3].y - p[2].y) * (p[2].y - p[0].y),
        c = (p[3].x - p[0].x) * (p[1].y - p[2].y) * (p[3].y - p[0].y);

    return (a >= 0 && b >= 0 && c >= 0) ||
        (a <= 0 && b <= 0 && c <= 0) ? 1 : 0; // возвращаем истину, если все стороны больше, либо равны 0, либо меньше или равны нулю. »наче возвращаем ложь
// этот кусок кода можно оформит лучше, все такие вместо 1 true, вместо 0 false было бы осмысленнее,
// а еще лучше возвратить результат выражени€ ( (a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0) )
}

bool prov(point p[]) // функци€ проверки, €вл€етс€ ли нашь треуг. треугольником вобще
{
    return p[1].x == p[2].x && p[2].x == p[3].x ? 0 : // если p[1].x == p[2].x && p[2].x == p[3].x то возвращаем истину, иначе 
        p[1].y == p[2].y && p[2].y == p[3].y ? 0 : 1; // if (p[1].y == p[2].y && p[2].y == p[3].y истину, иначе ложь;
}

int main()
{
    const size_t n = 4;
    point p[n];

    std::cout << "\n\nEnter coord point: ";
    for (size_t i = 0; i < n; ++i)
    {
        if (i > 0)
            std::cout << "\n\nEnter tringale coord " << i << ": ";

        std::cout << "\n\nx" << i << " -> ";
        std::cin >> p[i].x;
        std::cout << "\n\ny" << i << " -> ";
        std::cin >> p[i].y;
    }

    if (prov(p))
    {
        if (foo(p))
            std::cout << "\n\tYes" << std::endl;

        else
            std::cout << "\n\tNo" << std::endl;
    }

    else
        std::cout << "\n\tTringale not found" << std::endl;

    return 0;
}