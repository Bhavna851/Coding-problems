#include<iostream>
using namespace std;
/*better approach and there is one limitation with these approach that it would 
not work for the array which has negative elements*/
/*int main(){
    int n=4;
    int arr[n]={10,5,2,1};
    int largest=arr[0];
    for(int i=0;i<n-1;i++){
        if(largest<arr[i+1]){
            largest=arr[i+1];

        }
    }cout<<"largest element of array: "<<largest<<endl;
        int slargest=-1;
        for(int i=0;i<n;i++){
            if(slargest<arr[i]&& arr[i]!=largest){
                slargest=arr[i];
            }
        
    }cout<<"Second largest element: "<<slargest<<endl;
    return 0;
} 
    Time complexity= o(n)+o(n)=o(2n);
    */
 /*optimal approach to find second largest element */
 int main(){
    int n=6;
    int arr[n]={1,2,4,7,7,5};
    int largest=arr[0];
    int slargest=-1;
     for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest &&arr[i]>slargest){
            slargest=arr[i];
        }

     }cout<<"largest element: "<<largest<<endl;
     cout<<"second largest element: "<<slargest<<endl;
     return 0;

 }  
 /*LIMITATION - it will not work for the array which has negative elements
 Time complexity= o(n) these is better then the above approach */