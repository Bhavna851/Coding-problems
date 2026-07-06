/*SECOND LARGEST ELEMENT OF AN ARRAY */
#include<iostream>
#include<algorithm>
using namespace std;
/*BRUTE FORCE APPROACH USING SORTING FUNCTION*/
/*int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int slargest;
    int largest = arr[n-1];
    /*int slargest=arr[n-2]; these cannot be done because we need to think about 
    the worst case scenario*/

    /*WORST CASE SCENARIO
     1. ARRAY={1,2,4,3,5,7,7}
     2. ARRAY={1,7,7,7,7,7,7}
     3. NO SECOND LARGEST ELEMENT THEN IN THAT CASE -1
     */
    /*for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
           slargest=arr[i];
             break;
        }
    }cout<<"largest = "<<largest<<endl;
    cout<<"second largest = "<<slargest<<endl;
    return 0;

}*/
/*time complexity = o(nlogn)
space complexity=o(1)
*/
/*BETTER APPROACH*/
/*int main(){
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  /*let us find out largest element at first*/
  /*int largest=arr[0];
  for(int i=1;i<n;i++){
    if(largest<arr[i]){
      largest=arr[i];
    }
  }cout<<"largest = "<<largest;
  cout<<endl;
  /*finding the second largest element*/
  /*int slargest= -1;
  for(int i=0;i<n;i++){
    if(slargest<arr[i]&& arr[i] != largest)
{
  slargest= arr[i];
}  
}cout<<"second largest = "<<slargest<<endl;
  return 0;
}*/

/*OPTIMAL APPROACH*/
int slargestno(int n, int arr[]){
 
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
      if(largest<arr[i]){
        
        slargest=largest;
        largest=arr[i];
      }
      else if(arr[i]<largest &&arr[i]>slargest){
        slargest=arr[i];
      }  
      
    }cout<<"largest = "<<largest<<endl;
    cout<<"second largest= "<<slargest<<endl;
    return 0;
}
int main(){
   int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<slargestno(n, arr);
  return 0;
}
/*time complexity = o(n)
*/

































































































































































































































































































































































 



















































































































































































































































































































