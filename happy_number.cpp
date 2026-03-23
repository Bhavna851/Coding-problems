/*happy number
on doing sum of digits of a given number if at the end we get 1 then the
given number is a happy number
*/
#include<iostream>
using namespace std;
bool ishappy(int n){
    int sum;
    while(n!=1&& n!=4){
        sum=0;
        while(n>0){
            int ld=n%10;
            int sq=ld*ld;
            sum+=sq;
            n=n/10;
        }n=sum;
    }if(sum==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    if(ishappy(number)){
        cout<<"Yes! the number is a happy number";
    }
    else{
        cout<<"No! the number is not a happy number";
    }
return 0;
}