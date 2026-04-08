#include<iostream>
using namespace std;

class bus{

    int BusNo;
    string BusName;
    string BusDestination;
    string Source;
    string Time;

    public:
    static int count;

    void getdetail(){
        cout<<"Enter Bus No:";
        cin>>BusNo;

        cout<<"Enter Bus Name:";
        cin>>BusName;

        cout<<"Enter Bus Destination:";
        cin>>BusDestination;

        cout<<"Enter Bus Source:";
        cin>>Source;

        cout<<"Enter Bus time:";
        cin>>Time;

        count++;
        cout<<"\nBus record added succesfully..!!"<<endl;
    }

    void displayinfo(){
        cout<<"\nBus No:"<<BusNo<<endl;
        cout<<"Bus Name:"<<BusName<<endl;
        cout<<"Bus Destination:"<<BusDestination<<endl;
        cout<<"Bus Source:"<<Source<<endl;
        cout<<"Bus Time:"<<Time<<endl;
    }
    int getbusNo(){
        return BusNo;
    }
};
int bus :: count = 0;
int main(){
    bus Buses[100];

    int choice,i,serach;
    bool found = false;

    do{
        cout<<"\n||---==Bus Reservation System==---||"<<endl;
        cout<<"\n1.Add bus record.";
        cout<<"\n2.Display All Buses Detail.";
        cout<<"\n3.Search bus by bus no.";
        cout<<"\n4.Exit.";

        cout<<"\n\nEnter your Choice:";
        cin>>choice;

        switch(choice){
            case 1:
                if(bus::count < 100){
                    Buses[bus::count].getdetail();
                }
                else{
                    cout<<"Record system is full..!!";
                }
                break;
            case 2:
                if(bus::count == 0){
                    cout<<"No bus record found..!!";
                }
                else{
                    for(i=0;i<bus :: count;i++){
                        cout<<"\n||--==BUS"<<i+1<<"==--||"<<endl;
                        Buses[i].displayinfo();
                    }
                }
                break;
            case 3:
                if(bus :: count == 0){
                    cout<<"No bus record found.!!";
                }
                else{
                    cout<<"Enter Serach No:";
                    cin>>serach;

                    found = false;

                    for(i=0;i<bus::count;i++){
                        if(Buses[i].getbusNo() == serach){
                            found = true;
                            Buses[i].displayinfo();
                            break;
                        }  
                    }
                    if(!found){
                        cout<<"Bus record not found..!!"<<endl;
                    }
                }
                break;
            case 4:
                 cout<<"\nThank you for using bus reservation system."<<endl;
                 break;

            default:
                 cout<<"Invalid Choice..!!"<<endl;
        }

    }
    while(choice !=  4);
    

    return 0;
}