#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // Outer Loop for number of pass
    {
        for (int j = 0; j < n - 1 - i; j++) // Inner loop for individual check
        {
            if (arr[j] > arr[j + 1])  // if current element is greater than next element swap it
            {
                // call swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
    BubbleSort(arr, n);
    cout << "Sorted Array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}