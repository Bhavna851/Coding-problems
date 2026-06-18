 /*fibonacci series
 0 1 1 2 3 5 8 13 21 34 ......
 so here in these series the next number is obtained by 
 the addition of previous two digit .
 */
/*using recursion to print fibonacci series*/
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else{
      return fib(n-1)+fib(n-2);
    }
  }
  int main(){
    int n;cin>>n;
    cout<<fib(n);
    cout<<endl;
    for(int i=0;i<=n;i++){
      cout<<fib(i)<<" ";
    }
    return 0;
  }
