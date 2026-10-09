#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    int maxi=0;
    cout<<"ENTER SIZE OF ARRAY: "<<n<<endl;
    int arr[n];
    cout<<"Enter array elements below"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return 0;
}

/*TC- O(N)
SC - O(1)*/
