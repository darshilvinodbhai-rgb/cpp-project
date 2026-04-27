#include<iostream>
using namespace std;

class Number{

    int num;
    public:

    Number(int n){
        num = n;
    }
    bool operator >(Number obj){
        return num > obj.num;
    }
    void displaynum(){
        cout<<num<<endl;
    }
};
int main(){

    Number D1(65),D2(45);

    if(D1>D2){
        cout<<"Minimum Num is:";
        D2.displaynum();
    }
    else{
        cout<<"Minimum Num is:";
        D1.displaynum();
    }

    return 0;
}