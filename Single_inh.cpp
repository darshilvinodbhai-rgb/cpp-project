#include<iostream>
using namespace std;

  class Student{
    int StudentId;
    string StudentName;
    string CourseName;

    public:

    void getStudent(){
        cout<<"\nEnter Student Id:";
        cin>>StudentId;
        cin.ignore();

        cout<<"Enter Student Name:";
        getline(cin,StudentName);

        cout<<"Enter Course Name:";
        cin>>CourseName;
    }

    void printStudent(){
        cout<<"\n\n||--== Student Info==--||"<<endl;
        cout<<"Student Id:"<<StudentId<<endl;
        cout<<"Student Name:"<<StudentName<<endl;
        cout<<"Course Name:"<<CourseName<<endl;
    }
  };

   class Faculty : public Student{

    int FacultyId;
    string FacultyName;

    public:

    void getFaculty(){
        cout<<"Enter Faculty Id:";
        cin>>FacultyId;

        cin.ignore(1000,'\n');
        cout<<"Enter Faculty Name:";
        getline(cin,FacultyName);
    }

    void printFaculty(){
        cout<<"\n\n||--== Faculty Info==--||"<<endl;
        cout<<"Faculty Id:"<<FacultyId<<endl;
        cout<<"Faculty Name:"<<FacultyName<<endl;
    }
 };


int main(){
   Faculty D1;

   D1.getFaculty();
   D1.getStudent();

   D1.printFaculty();
   D1.printStudent();

    return 0;
}