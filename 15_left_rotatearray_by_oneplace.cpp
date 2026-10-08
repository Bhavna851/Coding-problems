#include<iostream>
using namespace std;
/*optimal approach
 TC- O(N) AND SC- O(1)*/
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int temp= arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}