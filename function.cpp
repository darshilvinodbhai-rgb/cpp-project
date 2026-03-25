#include<iostream>
using namespace std;

class student{
   
    private:

    int StudentId;
    string StudentName;
    float Percentage;

    public:
    void getdata(){
        cout<<"\nEnter StudentId:";
        cin>>StudentId;

        cout<<"Enter StudentName:";
        cin>>StudentName;

        cout<<"Enter Percentage:";
        cin>>Percentage;
    }

    void printdata() {
        cout<<"\n\n---===Student Information===---"<<endl;
        cout<<"StudentId:"<<StudentId<<endl;
        cout<<"StudentName:"<<StudentName<<endl;
        cout<<"Percentage:"<<Percentage<<endl;

    }

};

int main(){
     
    student mm;

    mm.getdata();
    mm.getdata();
    mm.printdata();
    mm.printdata();


    return 0;
}