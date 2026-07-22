#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[6] = {13, 46, 24, 52, 20, 9};
    for (int i = 0; i < n; i++)
    {  for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }  
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}