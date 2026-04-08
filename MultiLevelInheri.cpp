#include<iostream>
using namespace std;

class Employee{
    int EmpId;
    string EmpName;
    int CompletedTask;
    int PendingTask;

    public:

    void GetEmpDetail(int id,string Emp,int C_task,int P_task){
        EmpId = id;
        EmpName = Emp;
        CompletedTask = C_task;
        PendingTask = P_task;
    }

    void PrintEmpDetail(){
        cout<<"\n||--==Employee Report==--||"<<endl;
        cout<<"Emp Id:"<<EmpId<<endl;
        cout<<"Emp Name:"<<EmpName<<endl;
        cout<<"C_Task:"<<CompletedTask<<endl;
        cout<<"P_Task:"<<PendingTask<<endl;
    }
};

class Manager : public Employee{
    int ManagerId;
    string ManagerName;
    public:

    void GetM_Detail(int id,string M_Name){
        ManagerId = id;
        ManagerName = M_Name;
    }

    void PrintM_Detail(){
        cout<<"\n||--==MANAGER DETAIL==--||"<<endl;
        cout<<"Manager Id:"<<ManagerId<<endl;
        cout<<"Manager Name:"<<ManagerName<<endl;
    }
};

class Ceo : public Manager{
    string CeoName;

    public:
    void GetC_Detail(string M_name){
        CeoName = M_name;
    }
    void PrintC_Detail(){
        cout<<"\n||--== CEO DETAIL==--||"<<endl;
        cout<<"CEO Name:"<<CeoName<<endl;
    }
};


int main(){

    Ceo C;

    C.GetEmpDetail(11,"jayanti Thakor",20,7);
    C.GetM_Detail(12,"Manthan Patel");
    C.GetC_Detail("Darshil Chaudhry");

    C.PrintEmpDetail();
    C.PrintM_Detail();
    C.PrintC_Detail();
    return 0;
}