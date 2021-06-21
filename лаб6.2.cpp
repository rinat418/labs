#include <iostream>

int foo(int* m, int n)
{
    for (int i = 3; i > -1; i--)
    {
        m[i] = n % 10;
        n /= 10;
    }
    return n;
}

int main()
{
    setlocale(0, "");

    int m[4];
    int d, u;

    int n = -1;
    while (n != 0)
    {
        std::cout << "������� ������ �������: "; std::cin >> d;
        n = foo(m, d);
        if (n != 0) std::cout << "������ �����: ����������� ���������!\n";
    }

    n = -1;
    while (n != 0)
    {
        std::cout << "������� ������ �������: "; std::cin >> u;
        n = foo(m, u);
        if (n != 0) std::cout << "������ �����: ����������� ���������!\n";
    }

    if (d > u) std::swap(d, u);

    std::cout << "�����. |\t����� ������� ����������!  |\t"
        << "��������� ab-cd == a+b+c+d\n\n";

    for (n = d; n <= u; n++)
    {
        std::cout << n << "\t\t\t";
        foo(m, n);

        // ������� ���������� ����� �������:
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (m[i] == m[j])
                {
                    std::cout << "����!\t\t\t";
                    goto m;
                }
            }
        }
        std::cout << "... ���\t\t\t";
    m:;
        // ab-cd=a+b+c+d
        if ((m[0] * 10 + m[1]) - (m[2] * 10 + m[3]) == m[0] + m[1] + m[2] + m[3])
        {
            std::cout << "��!\n";
        }
        else std::cout << "... ���\n";
    }

    std::cin.get();
}