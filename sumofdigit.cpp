#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;cin>>n;
    while(n>0){
        int ld=n%10;
        sum+=ld;
        n=n/10;

    }
    cout<<sum;
    return 0;
    
}