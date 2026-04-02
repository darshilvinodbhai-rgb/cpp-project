#include <iostream>
using namespace std;

   class BankAccount{

    string AccountNo;
    string CustomerName;
    double AccountBalance;

    static int TotalAccount;
    static double TotalBalance;

    public:

    void CreateAccount(){

        cout<<"\nEnter Account No:";
        cin>>AccountNo;
        cin.ignore();

        cout<<"Enter Customer Name:";
        getline(cin,CustomerName);

        cout<<"Enter Account Balance:";
        cin>>AccountBalance;

        TotalAccount++;
        TotalBalance += AccountBalance;

    }

    void DisplayAccount(){
        cout<<"\nAccount No:"<<AccountNo<<endl;
        cout<<"Customer Name:"<<CustomerName<<endl;
        cout<<"Account Balance:"<<AccountBalance<<endl;
    }

    static void BankReport(){
        cout<<"\n\n||---==BANK REPORT==---||"<<endl;
        cout<<"Total Account:"<<TotalAccount<<endl;
        cout<<"Total Balance:"<<TotalBalance<<endl;
    }
 };

   int BankAccount :: TotalAccount = 0;
   double BankAccount :: TotalBalance = 0;

int main(){

    BankAccount D[2];

    for(int i=0;i<2;i++){
        D[i].CreateAccount();
    }

    for(int i=0;i<2;i++){
        D[i].DisplayAccount();
    }

    BankAccount::BankReport();

    return 0;
}