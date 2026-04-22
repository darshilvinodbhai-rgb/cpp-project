#include <iostream>
using namespace std;

class authsystem
{

public:
    void login(string email, string password)
    {
        cout << "Login with email & password successfully..";
    }

    void login(string mobileno, long int otp)
    {
        cout << "Login with number and otp successfully..";
    }
};
int main()
{
    authsystem a;

    // a.login("darshil@gmail.com","darshil@2004");
    a.login("7984523299", 255015);

    return 0;
}