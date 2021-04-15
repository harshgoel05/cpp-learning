// Maximum and minimum of an array

// Input  : arr[] = {1, 258, 3000}
// Minimum element is 1
// Maximum element is 3000
#include <iostream>
using namespace std;
void printArray(int arr[], int n);
void printMaxMin(int arr[], int n);
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
    printMaxMin(arr, n);
    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element at " << i << "  : " << arr[i] << "\n";
    }
}
void printMaxMin(int arr[], int n)
{
    int high = arr[0];
    int low = high;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > high)
            high = arr[i];
        if (arr[i] <= low)
            low = arr[i];
    }
    cout << "Highest: " << high << "\n";
    cout << "Lowest: " << low << "\n";
}