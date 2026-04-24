#include <iostream>
using namespace std;
class demo
{
    int num;

public:
    demo(int n)
    {
        num = n;
    }

    void operator++()
    {
        num += 5;
    }

    void displaynum()
    {
        cout << "\nNum is :" << num << endl;
    }
};
int main()
{
    demo d(20);

    for (int i = 1; i < 10; i++)
    {
        d.operator++();
        d.displaynum();
    }

    return 0;
}