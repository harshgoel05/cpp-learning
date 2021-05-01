// Kth smallest/largest element
// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Reference : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[k - 1];
}
int kthLargest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[n - k + 1];
}

int main()
{
    int n, k;
    int arr[100];
    char type;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element at " << i << "  : ";
        cin >> arr[i];
    }
    cout << "Enter the K: ";
    cin >> k;
    cout << "Enter L for lowest, H for highest: ";
    cin >> type;
    if (type == 'L')
        cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    else
        cout << "K'th largest element is " << kthLargest(arr, n, k);

    return 0;
}