#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter your age:";
    cin >> age;

    try
    {

        if (age < 18)
        {
            throw "Not able to vote..!";
        }
        cout << "You are able to submit ur vote";
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}