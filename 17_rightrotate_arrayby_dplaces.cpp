#include<iostream>
using namespace std;
void Reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void Rotate(int arr[],int n,int d){
    //reverse first n-d-1 elements
    Reverse(arr,0,n-d-1);
    //reverse last d elements
    Reverse(arr,n-d,n-1);
    //Reverse whole array
    Reverse(arr,0,n-1);

}
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d;cin>>d;
    if(d>=n) d=d%n;
    Rotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}