#include <iostream>
using namespace std;

class cricket
{
public:
    virtual void getTotalOvers()
    {
        cout << "Cricket Match start..";
    }
};
class T20match : public cricket
{
public:
    void getTotalOvers()
    {
        cout << "T20 match total overs : 20..";
    }
};
class TestMatch : public cricket
{
public:
    void getTotalOvers()
    {
        cout << "\nTest match total over : 90 per day...";
    }
};
int main()
{
    cricket *c;

    T20match t;

    c = &t;
    c->getTotalOvers();

    TestMatch test;

    c = &test;
    c->getTotalOvers();

    return 0;
}