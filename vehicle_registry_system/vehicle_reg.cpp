#include<iostream>
using namespace std;

// Base Class
class Vehicle{
protected:
    int id, year;
    string company, model;

public:
    static int total;

    Vehicle()
    {
        id = 0;
        company = "None";
        model = "None";
        year = 0;
        total++;
    }

    Vehicle(int i,string c,string m,int y)
    {
        id = i;
        company = c;
        model = m;
        year = y;
        total++;
    }

    virtual void display()
    {
        cout<<"\nID: "<<id;
        cout<<"\nCompany: "<<company;
        cout<<"\nModel: "<<model;
        cout<<"\nYear: "<<year;
    }

    int getID()
    {
        return id;
    }

    virtual ~Vehicle()
    {
        total--;
    }
};

int Vehicle::total = 0;

// Single Inheritance
class Car : public Vehicle{
protected:
    string fuel;

public:
    Car(int i,string c,string m,int y,string f)
        : Vehicle(i,c,m,y)
    {
        fuel = f;
    }

    void display()
    {
        Vehicle::display();
        cout<<"\nFuel: "<<fuel;
    }
};

// Multilevel
class ElectricCar : public Car{
protected:
    int battery;

public:
    ElectricCar(int i,string c,string m,int y,string f,int b)
        : Car(i,c,m,y,f)
    {
        battery = b;
    }

    void display()
    {
        Car::display();
        cout<<"\nBattery: "<<battery;
    }
};

class SportsCar : public ElectricCar{
    int speed;

public:
    SportsCar(int i,string c,string m,int y,string f,int b,int s)
        : ElectricCar(i,c,m,y,f,b)
    {
        speed = s;
    }

    void display()
    {
        ElectricCar::display();
        cout<<"\nSpeed: "<<speed;
    }
};

// Multiple
class Aircraft{
protected:
    int range;

public:
    Aircraft(int r)
    {
        range = r;
    }

    void showRange()
    {
        cout<<"\nRange: "<<range;
    }
};

class FlyingCar : public Car, public Aircraft{
public:
    FlyingCar(int i,string c,string m,int y,string f,int r)
        : Car(i,c,m,y,f), Aircraft(r) {}

    void display()
    {
        Car::display();
        showRange();
    }
};

// Hierarchical
class Sedan : public Car{
public:
    Sedan(int i,string c,string m,int y,string f)
        : Car(i,c,m,y,f) {}
};

class SUV : public Car{
public:
    SUV(int i,string c,string m,int y,string f)
        : Car(i,c,m,y,f) {}
};

// Registry
class Registry{
    Vehicle* v[50];
    int count;

public:
    Registry()
    {
        count = 0;
    }

    void add(Vehicle* obj)
    {
        v[count++] = obj;
        cout<<"\nAdded!";
    }

    void showAll()
    {
        for(int i=0;i<count;i++)
        {
            cout<<"\n------------";
            v[i]->display();
            cout<<"\n------------";
        }
    }

    void search(int x)
    {
        for(int i=0;i<count;i++)
        {
            if(v[i]->getID()==x)
            {
                v[i]->display();
                return;
            }
        }
        cout<<"\nNot Found!";
    }

    ~Registry()
    {
        for(int i=0;i<count;i++)
            delete v[i];
    }
};

// Main
int main()
{
    Registry r;
    int ch;

    do{
        cout<<"\n\n1.Car";
        cout<<"\n2.Electric Car";
        cout<<"\n3.Sports Car";
        cout<<"\n4.Flying Car";
        cout<<"\n5.Sedan";
        cout<<"\n6.SUV";
        cout<<"\n7.Show All";
        cout<<"\n8.Search";
        cout<<"\n9.Total";
        cout<<"\n0.Exit";

        cout<<"\nEnter Choice: ";
        cin>>ch;

        if(ch>=1 && ch<=6)
        {
            int id,year;
            string c,m,f;

            cout<<"ID: ";
            cin>>id;
            cout<<"Company: ";
            cin>>c;
            cout<<"Model: ";
            cin>>m;
            cout<<"Year: ";
            cin>>year;
            cout<<"Fuel: ";
            cin>>f;

            if(ch==1)
                r.add(new Car(id,c,m,year,f));

            else if(ch==2)
            {
                int b;
                cout<<"Battery: ";
                cin>>b;
                r.add(new ElectricCar(id,c,m,year,f,b));
            }

            else if(ch==3)
            {
                int b,s;
                cout<<"Battery: ";
                cin>>b;
                cout<<"Speed: ";
                cin>>s;
                r.add(new SportsCar(id,c,m,year,f,b,s));
            }

            else if(ch==4)
            {
                int rg;
                cout<<"Range: ";
                cin>>rg;
                r.add(new FlyingCar(id,c,m,year,f,rg));
            }

            else if(ch==5)
                r.add(new Sedan(id,c,m,year,f));

            else if(ch==6)
                r.add(new SUV(id,c,m,year,f));
        }

        else if(ch==7)
            r.showAll();

        else if(ch==8)
        {
            int x;
            cout<<"Enter ID: ";
            cin>>x;
            r.search(x);
        }

        else if(ch==9)
            cout<<"\nTotal Vehicles: "<<Vehicle::total;

    }while(ch!=0);

    return 0;
}