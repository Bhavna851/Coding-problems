/*Harshad number 
A number is said to be harshad number is it is divisible the 
sum of its digits*/

#include<iostream>
using namespace std;
bool isharshad(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        int ld= temp%10;
        sum+=ld;
        temp =temp/10;
    }
    if(n%sum==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int hd;
    cout<<"enter a number";
    cin>>hd;
    if(isharshad(hd)){
        cout<<"Yes! The given no. is a harshad number.";
    }
    else{
        cout<<"No! The given no. is not a harshad number.";
    }
    return 0; 
}