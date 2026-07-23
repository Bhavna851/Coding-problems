#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    int mini;
    for (int i = 0; i <= n - 2; i++)
    {
        mini = i; /*let us assume that the smallest element
         of unsorted array is present at first index*/

            for (int j = i; j <= n - 1; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
                
            }
        }
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
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
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}