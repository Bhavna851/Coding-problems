#include<iostream>
using namespace std;
bool Linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"index of target element "<<i<<" and arr[i] is "<<target<<endl;
            return true;
        }
    }
return false;
}
int main(){
    int n =5;
    int arr[n]={56,45,89,2,4};
    int target;cin>>target;
    if(Linearsearch(arr,n,target)==true){
        cout<<"Target found";
    }
    else{
        cout<<"target not found";
    }
    return 0;
}