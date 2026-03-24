#include<iostream>
using namespace std;

int main(){
    int StudentId;
    string StudentName;
    float Percentage;
    string Grade;

    cout<<"Enter StudentId:";
    cin>>StudentId;

    cout<<"Enter StudentName:";
    cin>>StudentName;

    cout<<"Enter Percentage:";
    cin>>Percentage;

    cout<<"Enter Grade:";
    cin>>Grade;


    cout<<"\n\n---== Student Information ==---"<<endl;
    cout<<"StudentId:"<<StudentId<<endl;
    cout<<"StudentName:"<<StudentName<<endl;
    cout<<"Percentage:"<<Percentage<<endl;
    cout<<"Grade:"<<Grade<<endl;

    return 0;

}