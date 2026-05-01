#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    // Deposit
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    // Withdraw (Virtual for Polymorphism)
    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    // Getter (Encapsulation)
    double getBalance()
    {
        return balance;
    }

    // Virtual Function
    virtual void displayAccountInfo()
    {
        cout << "\nAccount No: " << accountNumber;
        cout << "\nName: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }

    // Virtual function for polymorphism
    virtual void calculateInterest()
    {
        cout << "No Interest for Base Account\n";
    }
};

// ===== Savings Account =====
class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        cout << "Savings Interest: " << interest << endl;
    }
};

// ===== Checking Account =====
class CheckingAccount : public BankAccount
{
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

    void withdraw(double amount)
    {
        if (amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Withdrawal Successful (Overdraft Allowed)\n";
        }
        else
        {
            cout << "Overdraft Limit Exceeded!\n";
        }
    }

    void checkOverdraft()
    {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

// ===== Fixed Deposit Account =====
class FixedDepositAccount : public BankAccount
{
    int term; // in months
    double rate;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t, double r)
        : BankAccount(accNo, name, bal)
    {
        term = t;
        rate = r;
    }

    void calculateInterest()
    {
        double interest = (balance * rate * term) / (100 * 12);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

// ===== Main Menu =====
int main()
{
    BankAccount *acc = NULL;
    int choice;

    do
    {
        cout << "\n--- Banking System ---\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Display Info\n";
        cout << "7. Calculate Interest\n";
        cout << "0. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            int accNo;
            string name;
            double bal;

            cout << "Enter Account No: ";
            cin >> accNo;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Balance: ";
            cin >> bal;

            if (choice == 1)
            {
                double rate;
                cout << "Enter Interest Rate: ";
                cin >> rate;
                acc = new SavingsAccount(accNo, name, bal, rate);
            }
            else if (choice == 2)
            {
                double limit;
                cout << "Enter Overdraft Limit: ";
                cin >> limit;
                acc = new CheckingAccount(accNo, name, bal, limit);
            }
            else if (choice == 3)
            {
                int term;
                double rate;
                cout << "Enter Term (months): ";
                cin >> term;
                cout << "Enter Interest Rate: ";
                cin >> rate;
                acc = new FixedDepositAccount(accNo, name, bal, term, rate);
            }
        }

        else if (choice == 4 && acc != NULL)
        {
            double amt;
            cout << "Enter Amount: ";
            cin >> amt;
            acc->deposit(amt);
        }

        else if (choice == 5 && acc != NULL)
        {
            double amt;
            cout << "Enter Amount: ";
            cin >> amt;
            acc->withdraw(amt);
        }

        else if (choice == 6 && acc != NULL)
        {
            acc->displayAccountInfo();
        }

        else if (choice == 7 && acc != NULL)
        {
            acc->calculateInterest(); // POLYMORPHISM
        }

        else if (choice != 0)
        {
            cout << "Invalid Choice or Create Account First!\n";
        }

    } while (choice != 0);

    return 0;
}