#include<bits/stdc++.h>
using namespace std;/*
int main(){
    int n=9;
    int arr[n]={1,0,2,0,0,7,5,6,0};
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int j=0;
    for(auto x:temp){

        arr[j]= x;
        j++;
        }
    for(int j=temp.size();j<n;j++){
      arr[j]=0;
    }

  

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}*/
int main(){
    int n=9;
    int arr[n]={1,0,2,0,0,7,5,6,0};
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}