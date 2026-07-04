/*largest element in array*/

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
/*A. BRUTE FORCE APPROACH*/
/*int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     sort(arr,arr+n);// ascending order
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     int largest = arr[n-1];
     cout<<"largest element= "<<largest;
return 0;
    } 

    time complexity= o(nlogn)
    space complexity= o(1);
    */
/*B. OPTIMAL APPROACH*/
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        int largest=arr[0];
        for(int i=1;i<n;i++){
            
            if(largest<arr[i]){
                largest=arr[i];
            }
        }cout<<largest;
}
/*Time complexity =o(n)
space complexity= o(1)
*/