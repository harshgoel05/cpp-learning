// Move all negative numbers to beginning and positive to end with constant extra space

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

// Reference: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
using namespace std;

void sortPosNeg(int arr[], int n);
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
    sortPosNeg(arr, n);
    printArray(arr, n);
    return 0;
}

void sortPosNeg(int arr[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
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