#include<bits/stdc++.h>
using namespace std;
/*BRUTE FORCE APPROACH*/
/*
int main(){
    int n1=6;
    int n2=6;
    int arr1[n1]={1,1,2,3,4,5};
    int arr2[n2]={2,3,4,5,6,5};
    set<int>s;
    //both the loops for inserting the array elements into set
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
        
    }
    for(int j=0;j<n2;j++){
        s.insert(arr2[j]);
    
    }//loop for pushing back the elements from  set into vector
     vector<int>unionarr;
    for(auto it:s){
        unionarr.push_back(it);
       }
       //loop for print resultant vector 
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
    }

    return 0;

}/* time complexity: o(n1logn)+o(n2logn)+o(n1+n2)
    space complexity: o(n1+n2)+o(n1+n2)-->>last is only to 
    print array elements   */
/*OPTIMAL APPROACH*/
int main(){
  int n1=6;
    int n2=6;
    int a1[n1]={1,1,2,3,4,5};
    int a2[n2]={2,3,4,5,5,6};
    int i=0;int j=0;
    vector<int>unionarr;
    while(i<n1&&j<n2){
        if(a1[i]<=a2[j]){
          if(unionarr.size()==0|| a1[i]!=unionarr.back()){
            unionarr.push_back(a1[i]);
          }
          i++;
        }
        else{
            if(unionarr.size()==0 || a2[j]!=unionarr.back()){
                unionarr.push_back(a2[j]);
            }
            j++;
        }
    }
/*these loops are used when any of the the varaiable i and j exceeds the
size of array these loops will seperately insert the remaining elements in 
unionarr  */
/*if j exceeds n2 and i still <n1*/
while(i<n1){
    if(unionarr.size()==0|| a1[i]!= unionarr.back()){
        unionarr.push_back(a1[i]);
    }
    i++;
}
/* if i exceeds n1  and j still<n2*/
while(j<n2){
    if(unionarr.size()==0||a2[j]!=unionarr.back()){
        unionarr.push_back(a2[j]);
    }
    j++;
}
/*printing resultant elements*/
cout<<"union of a1 and a2: "<<endl;
for(auto it:unionarr){
    cout<<it<<" ";
}
  return 0;
    }  

