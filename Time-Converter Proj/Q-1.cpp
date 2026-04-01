#include<iostream>
using namespace std;

      class TimeConverter{
      int TotalSecond;

      public:
      void getdata(){

        cout<<"Enter Total Second:";
        cin>>TotalSecond;

      }

      void printdata(){
        int Hours = TotalSecond / 3600;
        int Minutes = (TotalSecond % 3600) / 60;
        int Second = TotalSecond % 60;

        cout<<"HH:MM:SS=>";

        if(Hours<10){
            cout<<0<<Hours<<":";
        }
        else{
            cout<<Hours<<":";
        }

        if(Minutes<10){
            cout<<0<<Minutes<<":";
        }
        else{
            cout<<Minutes<<":";
        }

        if(Second<10){
            cout<<0<<Second;
        }
        else{
            cout<<Second;
        }  
      }

 };

int main(){

    TimeConverter D;
    D.getdata();
    D.printdata();

    return 0;
}