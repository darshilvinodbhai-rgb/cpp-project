#include <iostream>
using namespace std;

class Admin
{

    string Comp_name;
    long int total_revenue;

protected:
    long int manager_salary;
    int total_staf;

public:
    long int Emp_salary;
    bool can_terminate;

    Admin()
    {
        Comp_name = "Darshil X tech";
        total_revenue = 55000000;
        manager_salary = 175000;
        total_staf = 225;
        Emp_salary = 98000;
        can_terminate = true;
    }
    void showprivatedata()
    {
        cout << "\nCompany Name:" << Comp_name << endl;
        cout << "Total Revenue:" << total_revenue << endl;
    }
    virtual void myAccess()
    {
        cout << "\nAdmin Details" << endl;
        showprivatedata();
        cout << "Manager salary:" << manager_salary << endl;
        cout << "Total staff:" << total_staf << endl;
        cout << "Emp salary:" << Emp_salary << endl;
        cout << "Can terminate:" << can_terminate << endl;
    }
};

class Manager : public Admin
{
public:
    void myAccess() override
    {
        showprivatedata();
        cout << "Manager salary:" << manager_salary << endl;
        cout << "Total staff:" << total_staf << endl;
        cout << "Emp salary:" << Emp_salary << endl;
        cout << "Can terminate:" << can_terminate << endl;
    }
};

class employee : public Manager
{
public:
    void myAccess() override
    {
        showprivatedata();
        cout << "Manager salary:" << manager_salary << endl;
        cout << "Total staff:" << total_staf << endl;
        cout << "Emp salary:" << Emp_salary << endl;
        cout << "Can terminate:" << can_terminate << endl;
    }
};
int main()
{
    Admin a;
    a.myAccess();

    Manager m;
    m.myAccess();

    employee e;
    e.myAccess();

    return 0;
}