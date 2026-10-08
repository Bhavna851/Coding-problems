#include<iostream>
#include<algorithm>
using namespace std;
/*Brute force approach*/
/*int main(){
    int n=6;
    int arr[n]={7,7,1,1,2,3};
    sort(arr,arr+n);
    int Firstsmall=arr[0];
    int secondSmall=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>Firstsmall){
           secondSmall=arr[i];
           break;
        }
    }cout<<"first small element of array: "<<Firstsmall<<endl;
    cout<<"Second small element of array: "<<secondSmall<<endl;
return 0;
} time complexity=o(nlogn)*/

/* OPTIMAL APPROACH */
int main(){
    int n=7;
    int arr[n]={7,9,3,4,5,3,2};
    int Firstsmall=arr[0];
    int Secondsmall=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<Firstsmall){
            Secondsmall=Firstsmall;
            Firstsmall=arr[i];
        }
        else if(arr[i]>Firstsmall&& arr[i]<Secondsmall){
            Secondsmall=arr[i];
        }
    }cout<<"first small element of array: "<<Firstsmall<<endl;
    cout<<"Second small element of array: "<<Secondsmall<<endl;
return 0;
}