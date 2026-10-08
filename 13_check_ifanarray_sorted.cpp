#include<iostream>
using namespace std;
//1st approach
/*int main(){
    int n=5;
    int arr[n]={1,2,3,5,2};
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"unsorted";
            break;
        }
        
    }
    return 0;
}*/
int issorted(int n, int arr[]){
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }

    }
    return true;
}
int main(){
    int n=5;
    int arr[n]={1,1,2,3,4};
    if(issorted(n,arr)==true){
         cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is unsorted"<<endl;
    }
    return 0;
}