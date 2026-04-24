#include<iostream>
using namespace std;

class Number{

    int num;
    public:

    Number(int n){
        num = n;
    }
    bool operator <(Number obj){
        return num < obj.num;
    }
    void displaynumber(){
        cout<<num<<endl;
    }
};
int main(){
    Number D1(20),D2(40);

    if(D1<D2){
        cout<<"Maximum Num is:";
        D2.displaynumber();
    }
    else{
        cout<<"Maximum Num is:";
        D1.displaynumber();
    }
    return 0;
}