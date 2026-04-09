#include<iostream>
using namespace std;
class authUser{
    string username;
    public:
    void loginuser(string user){
        username = user;
        cout<<username<<"\nLogin Successfully..!!";
    } 
};

class payment{

    int amount;
    public:

    void setAmount(int amt){
        amount = amt;  
    }
};

class onlinepayment :public authUser,public payment{
    public:

    void paymentmsg(string username,int amount){
        loginuser(username);
        setAmount(amount);
        cout<<endl<<amount<<"\nPayment Successfully...!!";
    }

};
int main(){
    onlinepayment p;
    p.paymentmsg("Darshil Chaudhry",51000);
    return 0;
}