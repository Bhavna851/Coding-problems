//brute force approach 
/*first sort the array and the element at the last position 
is the required largest element */
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={3,2,5,2,1};
    int mini;
    for(int i=0;i<n-1;i++){
        mini=i;
      for(int j=i;j<n;j++){
        if(arr[mini]>arr[j]){
            mini=j;
        }
      }swap(arr[i],arr[mini]);

    }cout<<"Sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"largest element: "<<arr[n-1]<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={55,88,102,78,109};
    int largest=arr[0];
    for(int i=0;i<n-1;i++){
        if(largest<arr[i+1]){
            largest=arr[i+1];
        }
    }cout<<"largest element: "<<largest<<endl;
    return 0;
}