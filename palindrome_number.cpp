#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int reverse=0;
    int dup=n;
    while(n>0){
        int ld=n%10;
        reverse=(reverse*10)+ld;
        n=n/10;

    }cout<<"reverse number: "<<reverse<<endl;
    if(dup==reverse){
        cout<<"Yes! palindrome";
    }
    else{
        cout<<"No!";
    }
return 0;
}