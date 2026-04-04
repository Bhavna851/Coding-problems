/*Given an integer num, return the number of steps to 
reduce it to zero.

In one step, if the current number is even, you have 
to divide it by 2,otherwise, you have to subtract 1 
from it.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{int n;cin>>n;
    int step=0;
    while(n>0){
        if(n%2==0){
            n=n/2;
            step++;
        }
        else{
            n=n-1;
            step++;
        }
    }cout<<step;
    return 0;
}    
