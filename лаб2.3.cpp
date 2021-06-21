#include <iostream>

struct point // ��������� ��������� point, ������� ��� ���� x � y ���� double
{
    double x; // ��������� � �������� ���� ����� �����: point_name.x
    double y; // ��������� � �������� ���� ����� �����: point_name.y
};

bool foo(point p[]) // ������� foo ��������� � �������� ��������� ������ ����������� ��������� ���� point � ���������� ������� ����������
{
    int a = (p[1].x - p[0].x) * (p[2].y - p[1].y) * (p[1].y - p[0].y),
        b = (p[2].x - p[0].x) * (p[3].y - p[2].y) * (p[2].y - p[0].y),
        c = (p[3].x - p[0].x) * (p[1].y - p[2].y) * (p[3].y - p[0].y);

    return (a >= 0 && b >= 0 && c >= 0) ||
        (a <= 0 && b <= 0 && c <= 0) ? 1 : 0; // ���������� ������, ���� ��� ������� ������, ���� ����� 0, ���� ������ ��� ����� ����. ����� ���������� ����
// ���� ����� ���� ����� ������� �����, ��� ����� ������ 1 true, ������ 0 false ���� �� �����������,
// � ��� ����� ���������� ��������� ��������� ( (a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0) )
}

bool prov(point p[]) // ������� ��������, �������� �� ���� �����. ������������� �����
{
    return p[1].x == p[2].x && p[2].x == p[3].x ? 0 : // ���� p[1].x == p[2].x && p[2].x == p[3].x �� ���������� ������, ����� 
        p[1].y == p[2].y && p[2].y == p[3].y ? 0 : 1; // if (p[1].y == p[2].y && p[2].y == p[3].y ������, ����� ����;
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