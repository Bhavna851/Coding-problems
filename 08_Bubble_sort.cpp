#include<iostream>
using namespace std;
/*void bubble_sort(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
  }

}*/
/* TIME COMPLEXITY= O(N^2) FOR WORST AND AVG CASE SCENARIO*/
void bubble_sort(int arr[],int n){
int dswap=0;//This is for the best case scenario where we can get already sorted array
for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            dswap=1;
            
        }
    }
    if(dswap==0){
    break; //because no  more iterations required
}
}


}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*tIME COMPLEXITY = O(N) FOR THE BEST CASE SCENARIO*/