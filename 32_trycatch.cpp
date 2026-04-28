#include <iostream>
using namespace std;

int main()
{

    int num[5] = {11, 21, 31, 41, 51};
    int index;

    cout << "Enter an index:";
    cin >> index;

    try
    {
        if (index > 5 || index < 0)
        {
            throw "Invalid index num..!";
        }
        cout << "Element :" << num[index] << endl;
    }
    catch (const char *arr)
    {
        cout << arr << endl;
    }
    return 0;
}