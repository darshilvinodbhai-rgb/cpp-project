#include<iostream>
using namespace std;

class Course{

    int CourseId;
    string CourseName;
    string CourseDuration;
    long int CourseFees;
    string FacultyName;

    public:

    void getdata(){
  
        cout<<"\nEnter Course Id:";
        cin>>CourseId;

        cout<<"Enter Course Name:";
        cin>>CourseName;

        cout<<"Enter Course Duration:";
        cin>>CourseDuration;

        cout<<"Enter Course Fees:";
        cin>>CourseFees;

        cout<<"Enter Faculty Name:";
        cin>>FacultyName;

    }

    void printdata();

};

    void Course::printdata(){
        cout<<"\nCourse ID:"<<CourseId<<endl;
        cout<<"Course Name:"<<CourseName<<endl;
        cout<<"Course Duration:"<<CourseDuration<<"months"<<endl;
        cout<<"Course Fees:"<<CourseFees<<endl;
        cout<<"Faculty Name:"<<FacultyName<<endl;
    }

int main(){

    Course D;
    
    D.getdata();
    D.printdata();

    return 0;
}

