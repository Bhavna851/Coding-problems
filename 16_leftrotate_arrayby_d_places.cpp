#include<bits/stdc++.h>
using namespace std;/*
Brute force approach*/
/*int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d;
    cin>>d;
    //1. temporary  vector to store first d elements
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    // 2. now shifting array elements
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //3. substituting elements from temp vector back to the array
  for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
  } cout<<"ARRAY ELEMENTS AFTER LEFT ROTATION BY D PLACES"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
    Tc- o(d)+o(n-d)+o(d)=o(n+d)
    sc-o(d)- extra space used by the temporary vector
    */

/*OPTIMAL APPROACH*/
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int n,int d){
    //reverse first d elements
     reverse(arr,0,d-1);
     //reverse remaining elements
     reverse(arr,d,n-1);
     //reverse whole array
     reverse(arr,0,n-1); 

}
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d;cin>>d;
    if(d>=n){
        d=d%n;
    }
    rotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}