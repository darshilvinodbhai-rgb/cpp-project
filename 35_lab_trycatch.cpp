#include<iostream>
#include<string>
using namespace std;

int main(){

   string password;
   bool uppercase = false;

   
    cout<<"Enter Password:";
    cin>>password;

    try{
        for(int i=0;i<password.length();i++){
            if(password[i] >= 'A' && password[i] <= 'Z'){
                uppercase = true;
                break;  
            }
        }
        if(uppercase){
            cout<<"Password is valid..!";
        }
        else{
            throw "Letter is not an uppercase..!";
        }
    }
    catch(const char *msg){
        cout<<"Error:"<<msg<<endl;
    }
    return 0;
}