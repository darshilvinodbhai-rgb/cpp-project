#include <iostream>
using namespace std;

class user
{
protected:
    string name;

public:
    void getuser(string username)
    {
        name = username;
    }
};

class buyer : public user
{
protected:
    int qty;

public:
    void getbuyer(int q)
    {
        qty = q;
    }
};

class seller
{
protected:
    int price;

public:
    void getseller(int p)
    {
        price = p;
    }
};

class finalclass : public buyer, public seller
{
public:
    void displayorderinfo()
    {
        int total = price * qty;
        cout << "\n\n||==---ORDER INFO---==||" << endl;
        cout << "Customer Name:" << buyer::name << endl;
        cout << "Total qty:" << qty << endl;
        cout << "Price:" << price << endl;
        cout << "Total Price:" << total << endl;
    }
};

int main()
{
    finalclass f;
    f.buyer::getuser("Darshil Chaudhry");
    f.getbuyer(5);
    f.getseller(500);
    f.displayorderinfo();

    return 0;
}