/*program to print all the divisors of a given number*/
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int printdivisor(int n){
    vector<int>ls;
    /* time complexity: o(sqrt(n))*/
    for(int i=1;i*i<= n;i++){
        if(n%i==0){
            ls.push_back(i);
        
          if((n/i)!=i)
            ls.push_back(n/i);
                  
    
                 } 
                }
sort(ls.begin(),ls.end());/*time complexity: o(nlogn)
where n= no. of factors*/
  for(auto n: ls) cout<<n<<" ";/* time complexity: o(n)
   overall time complexity is the addition of above three time 
   complexities*/

}

int main(){
    int n;cin>>n;
    printdivisor(n);
    return 0;
}






