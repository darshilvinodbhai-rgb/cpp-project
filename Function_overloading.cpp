#include <iostream>
using namespace std;

class polymor
{
public:
    int add(int a, int b)
    {
        cout << "Addition:" << a + b << endl;
    }

    double add(double a, double b)
    {
        cout << "Addititon:" << a + b << endl;
    }

    string add(string fname, string lname)
    {
        cout << "FullName:" << fname + lname << endl;
    }

    int add(int x, int y, int z)
    {
        cout << "Addition:" << x + y + z << endl;
    }
};
int main()
{
    polymor d;

    d.add(1, 2);
    d.add("Darshil", "Chaudhry");
    d.add(1.2, 5.2);
    d.add(50, 2, 3);

    return 0;
}