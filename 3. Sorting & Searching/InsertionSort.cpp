#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)  // for right sublist
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) // for left sorted sublist
        {
            arr[j + 1] = arr[j];  // reposition until correct place for temp is not found
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the numbers: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}