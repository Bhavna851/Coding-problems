#include<bits/stdc++.h>
using namespace std;
/*brute force approach*/
/*
int main(){
    int n=7;
    int arr[n]={1,1,2,2,2,3,3};
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);

    }int index=0;
    cout<<"elements stored in set"<<endl;
    for(auto it:s){
        cout<<it<<" ";
        arr[index]=it;
        index++;
    }cout<<endl;
    cout<<"after removing duplicates"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}*/
/*optimal approach*/
int main(){
    int n=7;
    int arr[n]={1,1,2,2,2,3,3};
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }

    }cout<<"number of unique element: "<<i+1<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }return 0;
}
