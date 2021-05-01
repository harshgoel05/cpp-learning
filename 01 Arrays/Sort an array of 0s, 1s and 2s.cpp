// Sort an array of 0s, 1s and 2s

// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

// Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
// Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

// Reference: https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

#include <iostream>
using namespace std;

void sort012(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int n;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element at " << i << "  : ";
        cin >> arr[i];
    }
    sort012(arr, n);
    printArray(arr, n);
    return 0;
}

void sort012(int arr[], int n)
{
    int high = n - 1;
    int low = 0;
    int mid = 0;
    while (mid <= high)
    {
        switch (arr[mid])
        {
            // in case of low
            // place the 0 at lower end,
            // low,mid = +1
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            // in case of 1
            // it should be at mid so no operation
            // mid = +1
            mid++;
            break;
        case 2:
            // in case of 2
            // it should be at high so
            // place 2 at high and high = -1
            swap(arr[mid], arr[high--]);
            break;

        default:
            break;
        }
    }
}

// For printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element at " << i << "  : " << arr[i] << "\n";
    }
}