#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    // Outer Loop
    for (int i = 0; i < n; i++)
    {
        int min = i; // Considering the current position as min element
        for (int j = i + 1; j < n; j++)   // Get Minimum element
        {
            if (arr[j] < arr[min])  // if true update min
            {
                min = j;
            }
        }
        if (min != i)  // if new min found and it not equal to current min swap it.
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
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
    SelectionSort(arr, n);
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}