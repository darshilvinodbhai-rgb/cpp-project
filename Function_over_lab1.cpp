#include <iostream>
using namespace std;

class polymor1
{
public:
    int add(int a, int b, int c, int d, int e)
    {
        cout << "\nAddition:" << a + b + c + d + e << endl;
    }
    int mul(int a, int b, int c, int d)
    {
        cout << "\nMultiplication:" << a * b * c * d << endl;
    }
    int sub(int a, int b, int c)
    {
        cout << "\nSubtraction:" << a - b - c << endl;
    }
    int div(int a, int b)
    {
        cout << "\nDivison:" << a / b << endl;
    }
};

class polymor2 : polymor1
{
public:
    int calculate(int a, int b)
    {
        div(a, b);
    }
    int calculate(int a, int b, int c)
    {
        sub(a, b, c);
    }
    int calculate(int a, int b, int c, int d)
    {
        mul(a, b, c, d);
    }
    int calculate(int a, int b, int c, int d, int e)
    {
        add(a, b, c, d, e);
    }
};

int main()
{
    polymor2 p;

    p.calculate(1,2,3,4,5);
    p.calculate(2,2,2,2);
    p.calculate(12,10,8);
    p.calculate(1500,2);

    return 0;
}