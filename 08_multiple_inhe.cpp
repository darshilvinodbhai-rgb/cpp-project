#include <iostream>
using namespace std;
class userinfo
{
    string username;
    string password;

protected:
    string role;

public:
    void getuserinfo()
    {
        cout << "Enter User Name:";
        getline(cin, username);

        cout << "Enter password:";
        getline(cin, password);

        cout << "Enter Role:";
        getline(cin, role);
    }

    void displayuserinfo()
    {
        cout << "\nUser Name" << username << endl;
        cout << "Password:" << password << endl;
        cout << "Role:" << role << endl;
    }
};

class productmanagement : public userinfo
{
    int productid;
    string productname;
    int productprice;
    string category;

public:
    void addproduct()
    {
        if (role == "admin")
        {
            cout << "\nEnter Product id:";
            cin >> productid;

            cin.ignore();
            cout << "Enter Product name:";
            getline(cin, productname);

            cout << "Enter price:";
            cin >> productprice;

            cout << "Enter product Category:";
            cin >> category;
        }
        else
        {
            cout << "Access Denied..!!\nYou are not an admmin..!!" << endl;
        }
    }

    void displayproductinfo()
    {
        if (role == "admin")
        {
            cout << "\nProduct Id:" << productid << endl;
            cout << "Product Name:" << productname << endl;
            cout << "Product Price:" << productprice << endl;
            cout << "Product Category:" << category << endl;
        }
    }
};
int main()
{
    productmanagement D;

    D.getuserinfo();
    D.addproduct();

    D.displayuserinfo();
    D.displayproductinfo();

    return 0;
}