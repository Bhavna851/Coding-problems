#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    int dup =max(a,b);
while(true){
   
   if(dup%a==0 && dup%b==0){
    cout<<"lcm = "<<dup;
    break;
   }
   
    dup++;//these will increase one by one increase for eg dup =16 next time 17,18,19....
    //till we  wont get the lcm 
    cout<<dup;
   
}
    return 0;

}