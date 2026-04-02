/*The sum of the cubes of each digit of a given number is 
equal to that number then the given number is said to be a armstrong
number*/
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int dup=n;
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+=(ld*ld*ld);
        n=n/10;

    }cout<<"SUM: "<<sum<<endl;
    if(dup==sum){
        cout<<"Yes! Armstrong number";
    }
    else{
        cout<<"No!";
    }return 0;
}
