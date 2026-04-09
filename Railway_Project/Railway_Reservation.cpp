#include<iostream>
using namespace std;

class Railway{
int TrainNo;
string TrainName;
string Destination;
string Source;
string Time;

public:
     static int count;

     void getdetail(){
        cout<<"Enter Train No:";
        cin>>TrainNo;

        cin.ignore();
        cout<<"Enter Train Name:";
        getline(cin,TrainName);

        cout<<"Enter Destination:";
        getline(cin,Destination);

        cout<<"Enter Source:";
        getline(cin,Source);

        cout<<"Enter Time:";
        cin>>Time;

        count++;
        cout<<"Record Added Successfully..!!"<<endl;
     }

     void displayinfo(){
        cout<<"Train No:"<<TrainNo<<endl;
        cout<<"Train Name:"<<TrainName<<endl;
        cout<<"Train Destination:"<<Destination<<endl;
        cout<<"Train Source:"<<Source<<endl;
        cout<<"Enter Time:"<<Time<<endl;
     }

     int getTrainNo(){
        return TrainNo;
     }


};
int Railway :: count = 0;

int main(){
    Railway Train[100];

    int choice,i,Search;
    bool found = false;

    do{
        cout<<"\n||--==Railway Reservation Sysetm==--||"<<endl;
        cout<<"\n1.Add train record.";
        cout<<"\n2.Display All Train Detail.";
        cout<<"\n3.Search train by train no.";
        cout<<"\n4.Exit.";

        cout<<"\nEnter Your Choice:";
        cin>>choice;

        switch(choice){
            case 1:
            if(Railway :: count < 100){
                Train[Railway :: count].getdetail();
            }
            else{
                cout<<"Record System is full..!!";
            }
            break;
            case 2:
            if(Railway :: count == 0){
                cout<<"No train record found.";
            }
            else{
                for(i=0;i<Railway::count;i++){
                    cout<<"\n||--==Train"<<i+1<<"==--||"<<endl;
                    Train[i].displayinfo();
                }
            }
            break;
            case 3:
                 if(Railway :: count == 0){
                    cout<<"No train Record Found..!!"<<endl;
                 }
                 else{
                    cout<<"Search Train No:";
                    cin>>Search;

                    found =  false;
                    for(i=0;i<Railway::count;i++){
                        if(Train[i].getTrainNo() == Search){
                            found = true;
                            Train[i].displayinfo();
                            break;
                        }
                    }
                    if(!found){
                        cout<<"Train Record Not Found:";
                    }
                 }
                 break;
            case 4:
                cout<<"Thanks for using Railway Reservation system..!!"<<endl;
                break;
            default:
                cout<<"Invalid Choice..!!";
        }

    }
    while(choice != 4);

    return 0;
}