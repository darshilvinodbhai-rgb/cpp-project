#include<iostream>
using namespace std;

class RBI{
    public:
      void interest_rate(){
        cout<<"\nInterrest Rate : 6%";
      }
};
class BOB : public RBI{
    public:
       void bankofbaroda(){
        cout<<"\n\nWelcome to bank of Baroda..!!";
        interest_rate();
       }
};
class SBI : public RBI{
    public:
      void bankofsbi(){
        cout<<"\n\nstate bank of india..!!";
        interest_rate();
      }
};
class HDFC : public RBI{
    public:
       void bankofhdfc(){
        cout<<"\n\nWelcome to hdfc bank...!!";
        interest_rate();
       }
};
int main(){
    BOB b;
    b.bankofbaroda();

    SBI s;
    s.bankofsbi();

    HDFC h;
    h.bankofhdfc();

    return 0;
}