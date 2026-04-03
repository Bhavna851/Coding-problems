/*prime number
the number that has only two factors is known as prime number
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }if(count==2){
        cout<<"YES! prime number";
    }
    else{
        cout<<"NO!";
    }return 0;
}
/*another approach
int main()
{
    int n ;cin>>n;
int count=0;
for(int i=1;i*i<=n;i++)
{
if(n%i==0){
count++;
  if((n/i)!=i)
      count++;
}

}
if(count==2){
cout<<"Yes! prime number";
}
else{
cout<<"NO!";
}
return 0;
}*/
