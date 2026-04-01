#include<iostream>
using namespace std;

  class Company{

    int Comp_id;
    string Comp_name;
    int Comp_staf_quan;
    long int Comp_revenue;
    string Comp_ceo;

    public:

    Company(int id,string name,int staf,long int revenue,string ceo){
        Comp_id = id;
        Comp_name = name;
        Comp_staf_quan = staf;
        Comp_revenue = revenue;
        Comp_ceo = ceo;

    }

    void printdata(){
        cout<<"||--==Company Detail==--||"<<endl;
        cout<<"\nCompany Id:"<<Comp_id<<endl;
        cout<<"Company Name:"<<Comp_name<<endl;
        cout<<"Company staf Quan:"<<Comp_staf_quan<<endl;
        cout<<"Company Revenue:"<<Comp_revenue<<"Cr"<<endl;
        cout<<"Company Ceo Name:"<<Comp_ceo<<endl;
    }
    
  };

int main(){

    Company D(101,"Info_tech",55,1200,"Darshil");

    D.printdata();

    return 0;
}