#include<iostream>
using namespace std;

   class TimeConverter{
    int Hours,Minutes,Second;

    public:
    void getdata(){
        cout<<"Enter Hours:";
        cin>>Hours;

        cout<<"Enter Minute:";
        cin>>Minutes;

        cout<<"Enter Second:";
        cin>>Second;
    }

    void Convertdata(){
        int TotalSecond = (Hours*3600) + (Minutes*60) + Second;
        cout<<"TotalSecond :"<<TotalSecond;
    }

   };

int main(){

    TimeConverter DD;
    DD.getdata();
    DD.Convertdata();

    return 0;
}