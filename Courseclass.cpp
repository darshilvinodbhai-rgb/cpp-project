#include<iostream>
#include<string>
using namespace std;

class CourseData{

    int CourseId;
    string CourseName;
    long int CourseFees;
    string JoiningDate;
    string CourseDuration;

    public:

    void getCourseData(){

        cout<<"\nEnter CourseId:";
        cin>>CourseId;
        cin.ignore();

        cout<<"Enter Course Name:";
        getline(cin,CourseName);

        cout<<"Enter Course Fees:";
        cin>>CourseFees;

        cout<<"Enter Joining Date:";
        cin>>JoiningDate;
        cin.ignore();

        cout<<"Enter Course Duration:";
        getline(cin,CourseDuration);
    }

    void printCourseData(){

        cout<<"CourseID:"<<CourseId<<endl;
        cout<<"CourseName:"<<CourseName<<endl;
        cout<<"CourseFees:"<<CourseFees<<endl;
        cout<<"JoiningDate:"<<JoiningDate<<endl;
        cout<<"CourseDuration:"<<CourseDuration<<endl;

    }

};

int main(){
 
    CourseData c[2];

    for(int i=0;i<2;i++){
        c[i].getCourseData();
    }

    for(int i=0;i<2;i++){
        cout<<"\n\n--==||Course"<<i+1<<"||==--"<<endl;
        c[i].printCourseData();
    }

    return 0;
}