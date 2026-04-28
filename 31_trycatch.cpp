#include <iostream>
using namespace std;

int main()
{

    int num;
    try
    {
        cout << "Enter any num:";
        cin >> num;

        if (num == 0)
        {
            throw "Divison not allow using 0..!";
        }
        cout << "Divison is:" << num / 5 << endl;
    }
    catch (const char *err)
    {
        cout << "Error:" << err << endl;
    }
    return 0;
}