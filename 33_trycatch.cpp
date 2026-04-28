#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter Any Num:";
    cin >> num;

    try
    {

        if (num < 0)
        {
            throw "Negative num is not allow..!";
        }
        cout << "Square is:" << num * num << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}