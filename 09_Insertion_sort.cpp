#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
    /*for(int i=1;i<=n-1;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }

    }*/
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {                          /*j=1 arr[1]<arr[0]    arr[1]=1 and arr[j-1]=4*/
            int temp = arr[j - 1]; // temp=4
            arr[j - 1] = arr[j];   // arr[j-1]=arr[j]  4=1
            arr[j] = temp;         // arr[j]=temp arr[1]=4
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*Time complexity - o(n^2) for worst and average case
  Time complexity - 0(n) for best case eg 1 2 3 4 (already sorted array)*/