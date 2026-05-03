#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void getdata(string n, string soun)
    {
        name = n;
        sound = soun;
    }

    void setdata()
    {
        cout << name << " Makes " << sound << endl;
    }
};
class Dog : public Animal
{

public:
    void bhaoww()
    {
        getdata("Dog", "Bhaoww");
        setdata();
    }
};
class Cat : public Animal
{

public:
    void meow()
    {
        getdata("Cat", "Meoww");
        setdata();
    }
};
int main()
{

    Dog D;
    Cat C;

    D.bhaoww();
    C.meow();
    
    return 0;
}