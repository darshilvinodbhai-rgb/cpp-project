#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedyear;
};
int main()
{

    Book b[2];

    for (int i = 0; i < 2; i++)
    {

        cout << "Enter Title:";
        cin >> b[i].title;

        cout << "Enter Author:";
        cin >> b[i].author;

        cout << "Enter Publishe year:";
        cin >> b[i].publishedyear;
    }

    cout << "\n||---Book Details---||\n";
    for (int i = 0; i < 2; i++)
    {
        cout << b[i].title << "|"
             << b[i].title << "|"
             << b[i].publishedyear << endl;
    }
    return 0;
}