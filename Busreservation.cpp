// Bus Reservation System
#include<iostream>
using namespace std;

class Bus{
    int busNo;
    string busName;
    string destination;
    string source;
    string time;

    public:
        static int count;

        void getDetails(){
            cout<<"\nEnter busNo:";
            cin>>busNo;

            cin.ignore();
            cout<<"Enter busName:";
            getline(cin,busName);

            cout<<"Enter Source:";
            getline(cin,source);
            
            cout<<"Enter Destination:";
            getline(cin,destination);

            cout<<"Enter Time:";
            getline(cin,time);

            count++;
            cout<<"\nBus Record added successfully.!!"<<endl<<endl;

        }

        void displayBusInfo(){
            cout<<"Bus Number:"<<busNo<<endl;
            cout<<"Bus Name:"<<busName<<endl;
            cout<<"Source:"<<source<<endl;
            cout<<"Destination:"<<destination<<endl;
            cout<<"Time:"<<time<<endl;
        }

        int getBusNo(){
            return busNo;
        }
};

int Bus::count = 0;

int main(){

    Bus buses[100];//object array
    
    int choice,i,searchNo;
    
    bool found = false;

    do{
        cout<<"\n\n||--=== BUS RESERVATION SYSTEM ===--||"<<endl;
        cout<<"\n1.Add Bus Record.";
        cout<<"\n2.Display All Buses Details.";
        cout<<"\n3.Search bus by busNo.";
        cout<<"\n4.Exit";

        cout<<"\n\nEnter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                if(Bus::count < 100){
                    buses[Bus::count].getDetails();
                    // buses[0].getDetails();
                }
                else{
                    cout<<"Record system is full.!"<<endl;
                }
                break;
            case 2:
                if(Bus::count == 0){
                    cout<<"No buses record found.!!";
                }
                else{
                    for(i=0;i<Bus::count;i++){
                        cout<<"\n||--= BUS - "<<i+1<<"=--||"<<endl;
                        buses[i].displayBusInfo();
                    }
                }
                break;

            case 3:
                if(Bus::count == 0){
                    cout<<"No buses record found.!!";
                }
                else{
                    cout<<"Enter searchNo:";
                    cin>>searchNo;

                    for(i=0;i<Bus::count;i++){
                        if(buses[i].getBusNo() == searchNo){
                            found = true;
                            buses[i].displayBusInfo();
                        }
                        else{
                            cout<<"Bus record not found.!!"<<endl;
                        }
                       
                    }
                }
                break;

            case 4:
                cout<<"\nThank you for using Bus Reservation System."<<endl;
                break;
            
            default:
                cout<<"\nInvalid choice..!!"<<endl;
        }

    }
    while(choice != 4);

    return 0;
}