#include<iostream>
using namespace std;
class Employee1{

    int emp1_id;
    string emp1_name;
    int emp1_salary;
    public:

    void Emp1getinfo(){
        cout<<"Enter Emp1 Id:";
        cin>>emp1_id;

        cin.ignore();
        cout<<"Enter Emp1 Name:";
        getline(cin,emp1_name);

        cout<<"Enter Emp1 salary:";
        cin>>emp1_salary;
    }

    void Emp1displayinfo(){
        cout<<"\n||--==EMP1 DETAIL==--||"<<endl;
        cout<<"Emp1 ID:"<<emp1_id<<endl;
        cout<<"Emp1 Name:"<<emp1_name<<endl;
        cout<<"Emp1 salary:"<<emp1_salary<<endl;
    }
};

class Employee2{
    int emp2_id;
    string emp2_name;
    int emp2_salary;
    public:

    void Emp2getinfo(){
        cout<<"\nEnter Emp2 id:";
        cin>>emp2_id;

        cin.ignore();
        cout<<"Enter Emp2 Name:";
        getline(cin,emp2_name);

        cout<<"Emp2 salary:";
        cin>>emp2_salary;
    }

    void Emp2displayinfo(){
        cout<<"\n||--==EMP2 DETAIL==--||"<<endl;
        cout<<"Emp3 id:"<<emp2_id<<endl;
        cout<<"Enter Emp2 Name:"<<emp2_name<<endl;
        cout<<"Enter Emp2 salary:"<<emp2_salary<<endl;
    }
};

class Employee3{
    int emp3_id;
    string emp3_name;
    int emp3_salary;
    public:

    void Emp3getdetail(){
        cout<<"\nEnter Emp3 id:";
        cin>>emp3_id;

        cin.ignore();
        cout<<"Enter Emp3 Name:";
        getline(cin,emp3_name);

        cout<<"Enter Emp3 salary:";
        cin>>emp3_salary;
    }

    void Emp3displayinfo(){
        cout<<"\n||--==EMP3 DETAIL==--||"<<endl;
        cout<<"Emp3 id:"<<emp3_id<<endl;
        cout<<"Emp3 name:"<<emp3_name<<endl;
        cout<<"Emp3 salary:"<<emp3_salary<<endl;
    }
};

class Manager : public Employee1,public Employee2, public Employee3{
    string name;
    public:

    void Managergetinfo(string n_me){
        name = n_me;
    }
    void managerdisplayinfo(){
        cout<<"\n||---==MANAGER DETAIL==---||"<<endl;
        cout<<"Manager Name:"<<name<<endl;
    }
};
int main(){
  Manager mm;
  mm.Emp1getinfo();
  mm.Emp2getinfo();
  mm.Emp3getdetail();

  mm.Managergetinfo("Darshil Chaudhry");
  mm.managerdisplayinfo();

  mm.Emp1displayinfo();
  mm.Emp2displayinfo();
  mm.Emp3displayinfo();

    return 0;
}