/*your task is to find the difference of Squares of first and last digit of a 
given no these difference may be
1.even positive- hello
2.even negative - hii
3.odd positive - how are you
4.odd negative - bye bye
output should be a message based on the difference as given above
*/

#include<iostream>
using namespace std;
int main(){
    int n,ld,fd;
    cout<<"Enter a number: ";
    cin>>n;

    int diff;
    ld=n%10;
    while(n>=10){
        n=n/10;
    }fd=n;
    diff=(fd*fd)-(ld*ld);
    cout<<diff<<endl;
if(diff==0){
    cout<<"Zero difference";
}
else if(diff%2==0){
    if(diff>0){
        cout<<"even Positive: HELLO";
    }
    else{
        cout<<"even Negative: HII";
    }
}
else{
    if(diff>0){
        cout<<"Odd positive: HOW ARE YOU";
    }
    else{
        cout<<"Odd Negative: BYE BYE";
    }
}
return 0;
}
output:

Enter a number: 560
25
Odd positive: HOW ARE YOU
