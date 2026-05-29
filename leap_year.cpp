/*leap year= 366 days*/
#include<iostream>
using namespace std;
int main(){
    int year;cin>>year;
    if(year%400==0){
        cout<<"leap year: "<<year;

    }
    else if(year%100==0){
        cout<<"not leap year: "<<year;
    }
    else if(year%4==0){
        cout<<"leap year: "<<year;
    }
    else{
            cout<<"not leap year : "<<year;
        }
 
    
    return 0;
}