#include <iostream>
using namespace std;

class person
{

    string name;
    int age;
    string address;

public:
    person(string n, int ag, string add)
    {

        name = n;
        age = ag;
        address = add;
    }

    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Address:" << address << endl;
    }
};
int main()
{
    person N("Darshil Chaudhry", 20, "Gandhinagar");

    N.display();

    return 0;
}