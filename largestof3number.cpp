#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"a is largest";

    }

    else if(b>a&&b>c){
        cout<<"b is laargest";
    }
    else{
        cout<<"c is largest";    }
return 0;
    }
/*ANOTHER APPROACH
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int largest= max(a,(max(b,c)));
    cout<<largest;
    return 0;

}*/