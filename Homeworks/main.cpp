#include<iostream>

using namespace std;
//#define FACTORIAL
//#define EXPONENT
//#define ASCII
//#define ����������
void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
    int num;
    std::cout << "������� �����: ";
    std::cin >> num;

    int factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    std::cout << num << "! = " << factorial << std::endl;
#endif //FACTORIAL


#ifdef EXPONENT
    int base, exponent;
    std::cout << "������� ��������� �������: ";
    std::cin >> base;
    std::cout << "������� ���������� �������: ";
    std::cin >> exponent;

    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    std::cout << base << "^" << exponent << " = " << result << std::endl;
#endif // EXPONENT


#ifdef ASCII
    for (int i = 0; i < 256; i++) {
        if (i % 16 == 0) {
            std::cout << std::endl;
        }
        std::cout << static_cast<char>(i) << " ";
    }
#endif // ASCII

#ifdef ����������
    int n;
    std::cout << "������� �����: ";
    std::cin >> n;

    int a = 0, b = 1, c;
    std::cout << "��� ��������� �� " << n << ": ";
    std::cout << a << " " << b << " ";

    while (a + b <= n) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
#endif // ����������




}