#include <iostream>

// 14. �� �� ������ ��������, ����� �������� 5 �������� �����. 
// ������� ��� �� ��� �� ������ � ��������� ����������� A, ������ A ������� ������ ����� ����� ���������� ��� �����, 
// ����������� ������ ���. ������� ��� ����� �� ����� � ��������� ����������� B, 
// ������ B ������� ������ ����� ����� ���, ����������� ������ ���.
// 
// ����� 5 - �� �����(case insensitive).�� �� ������ :
// 
// ���� 5 - ���� ����� ���������� �� ������������ �� A � B.
// ���� 5 - ���� ����� ���������� �� ��������� �� A � B.
// ���� 5 - ���� ����� ���������� �� ��������� �� A � B.
// ��� �� ���������� ������������ ��������(����� ����������� �� �������� ��� �������) ���������� ���� 5 - 
// ���� ����� ���������� ���� � ���������� � ����� �� ����������� A ��� B.
void Task14()
{
    char a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e; 
    a += 32; // a = tolower(a);
    b += 32; // b = tolower(b);
    e = tolower(e);
    bool A = (a <= e && b >= e);
    bool B = (c <= e && d >= e);
    std::cout << ((A || B) ? "true, " : "false, "); // ����������
    std::cout << ((A && B) ? "true, " : "false, "); // �������
    std::cout << ((A && !B) ? "true, " : "false, "); // �������
    std::cout << (((A && !B) || (!A && B)) ? "true, " : "false, "); // ���������� ���� � ���������� � ����� �� �����������
}

// 13. �������� �� ������ ����� a,b,c , ����� �� ��������� ������������� � �����������
// ax2+ bx +c = 0. �� �� ������ ����� �� ���� ������ ������ ��� ���� ���������.
void Task13()
{
    int a, b, c, D;
    std::cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0) std::cout << 0;
    else if (D == 0) std::cout << 1;
    else if (D > 0) std::cout << 2;
}

// 12. �� ����� �������� ��� ������������ ����� �� ���������� �� ������������.(x,y ����������) 
// ��������, �� ��� �� � ��������, � � ���������� ��������� �� ������������� �������. 
// ��� ��������� �� ��� ���� ����� ���������� ���� �� �� ������ �����, �� ������� ��� ����� ������ �������������.
void Task12()
{
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (x3 >= x1 && x3 <= x2 && y3 >= y1 && y3 <= y2)
    {
        std::cout << 1;
    } 
    else
    {
        std::cout << 0;
    }
}

// 11. �� �� ������ ��������, ����� ���� �� ��������� ��� ����� - ���, ����� � ������, 
// � ������� �� ������ 1, ��� ����� ����� ������� ������� ����, � 0 � �������� ������.
void Task11()
{
    int day, month, year;
    std::cin >> day >> month >> year;
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0)
    {
        std::cout << 0;
    }
    else
    {
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31)
            {
                std::cout << 0;
                return;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30)
            {
                std::cout << 0;
                return;
            }
            break;
        case 2:  // ��������
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                if (day > 29)
                {
                    std::cout << 0;
                    return;
                }
            }
            else
            {
                if (day > 28)
                {
                    std::cout << 0;
                    return;
                }
            }
            break;
        default:
            std::cout << 0;
            return;
        }
        std::cout << 1;
    }
}

// 10. �� �� ������ ��������, � ����� �� ������� 4-������o ���������� ����� n. 
// �� ���� ����� �� �������� 2 ���� 2-������� �����. ������� ����� �� ������� �� 1-���� � 4-���� ����� �� n, �, 
// ������� - �� 2-�a�� � 3-���� ����� �� n. �� ������ �� �� ������ ���� 1-�� ���� ����� e ��-�����,
// ����� ��� ��-������ �� 2-�� �����.
void Task10()
{
    int num;
    std::cin >> num;
    int a = (num / 1000) * 10 + num % 10;
    int b = ((num / 100) % 10) * 10 + ((num / 10) % 10);
    if (a > b)
        std::cout << a << " > " << b;
    else if (a < b)
        std::cout << a << " < " << b;
    else if (a == b)
        std::cout << a << " = " << b;
}

// 9. �� ��������� �� �������� ��� ������ �����. ������� � ��� ���� �� ��������, 
// � ������� ������� �� ����. �� �� ������� ���� ������� ����� �� ������� � ��������� 
// � ��� ������� � ������ �� ���� �� �� ������ ���������, �� ���������� � ��������. 
// ��� ������� � � ��������� �� �� ������ ���������, �� � � ���������� � �������. 
// ��� �� �� ������ � ��������� �� �� ������ ��������� ���������.
void Task9()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a <= c && c <= b)
    {
        std::cout << "The number is within the given interval. ";
    }
    else if (a >= c || b <= c)
    {
        std::cout << "The number is not in the given interval. ";
    }
    if (a == c || b == c)
    {
        std::cout << "The interval is closed.";
    }
    else
    {
        std::cout << "The interval is open.";
    }
}

// 8. �� �� ������ ��������, ����� ��� �������� ������ r � �������� ����� (�, �) 
// ��������� ���� ������� �� ������ �����/����� ��� �� ������� �� ��������� � ������ (0,0).
void Task8()
{ 
    int r, x, y;
    std::cin >> r >> x >> y;
    if ((x * x + y * y) < r * r)
    {
        std::cout << "In the circle";
    }
    else if ((x * x + y * y) > r * r)
    {
        std::cout << "Out of the circle";
    }
    else if ((x * x + y * y) == r * r)
    {
        std::cout << "On the circle";
    }
}

// 7. �� �� ������ ��������, ����� ������ �� ����� 3 ���� ����� � �� ��������� � �������� ���.
void Task7()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a <= b && b <= c)
    {
        std::cout << a << " " << b << " " << c;
    }
    else if (a <= b && c <= b)
    {
        std::cout << a << " " << c << " " << b;
    }
    else if (b <= a && b <= c)
    {
        std::cout << b << " " << c << " " << a;
    }
    else if (b <= a && c <= b)
    {
        std::cout << b << " " << a << " " << c;
    }
    else if (c <= a && a <= b)
    {
        std::cout << c << " " << a << " " << b;
    }
    else
    {
        std::cout << c << " " << b << " " << a;
    }
}

// 6. �������� ��������, ����� ���� ���� ������ �� ��������� � ������� ���� ��� 
// � ������ ��� ����� ����� � ���� ���� ���� � ������ ��� ��������.
// �� �� ������ ���������� �� ������������� �����(�� ������ - ����� � ���������).
void Task6()
{
    char a;
    std::cin >> a;
    if ((int)a >= 97 && (int)a <= 122)
    {
        std::cout << char(a - 32) << std::endl;
        if ((int)a == 97 || (int)a == 101 || (int)a == 111 || (int)a == 117 || (int)a == 105)
        {
            std::cout << "Vowel" << std::endl;
        }
    }
    else if ((int)a >= 65 && (int)a <= 90)
    {
        std::cout << char(a + 32) << std::endl;
        if ((int)a == 65 || (int)a == 69 || (int)a == 79 || (int)a == 86 || (int)a == 73)
        {
            std::cout << "Vowel" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid character";
    }
}

// 5. ����������� �������� ��������, �������� �� ��������� ��� �� ��� �������� ���� ����� � ��-������.
void Task5()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << ((a > b) ? a : b);
}

// 4. �� ��������� �� �������� ��� �� ��������� ��� ������� �� ���� ����� �� 1 �� 7 (1 - Monday, 2 - Tuesday, � �.�.).
//    ���� �� ��������� �� ������ ��� ��� �� ��������� � ���� ����� � ����.
void Task4()
{ 
    int day;
    std::cin >> day;
    switch (day)
    {
    case 1: std::cout << "Monday"; break;
    case 2: std::cout << "Tuesday"; break;
    case 3: std::cout << "Wednesday"; break;
    case 4: std::cout << "Thursday"; break;
    case 5: std::cout << "Friday"; break;
    case 6: std::cout << "Saturday"; break;
    case 7: std::cout << "Sunday"; break;
    default: std::cout << "Not a number between 1 and 7"; break;
    }
}

// 3. �� �� ������e �� ��������� ���� ����� - ������, � �� �� ������ ���� �������� � ���������.
//    - ������, ������ �� �� ������� 4 ��� �������, � ���������;
//    - ��� �������� ����� ���� �� ���� ��� ������� �� 100, �� �� �� � ���������;
//    - �� ��� �������� ���� �� ���� ��� ������� � �� 400, �� �� ��� �� � ���������.
void Task3()
{ 
    int year;
    std::cin >> year;
    if (year % 4 == 0)
        std::cout << "Leap year";
    else if (year % 100 == 0)
        std::cout << "Not a leap year";
    else if (year % 400 == 0)
        std::cout << "Leap year";
    else
        std::cout << "Not a leap year";
}

// 2. �� �� ������ ��������, ����� ���� �� ��������� ����� ����� 0 � 9 � ��������� ��������������� �� ������ �����.
void Task2()
{ 
    int a;
    std::cin >> a;
    switch (a)
    {
    case 1: std::cout << "I";    break;
    case 2: std::cout << "II";   break;
    case 3: std::cout << "III";  break;
    case 4: std::cout << "IV";   break;
    case 5: std::cout << "V";    break;
    case 6: std::cout << "VI";   break;
    case 7: std::cout << "VII";  break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX";   break;
    }
}

// 1. ������� �� ���� ����� �� ���������. �������� �� ��������� ���� ������� � �����������, ����������� ��� 0.
void Task1()
{ 
    int a;
    std::cin >> a;
    if (a > 0)
    {
        std::cout << "Positive";
    }
    else if (a < 0)
    {
        std::cout << "Negative";
    }
    else
    {
        std::cout << "Zero";
    }
}

int main()
{
    Task14();
}
