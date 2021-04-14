// Write a program to reverse an array or string

// Input  : arr[] = {1, 2, 3}
// Output : arr[] = {3, 2, 1}

// Input :  arr[] = {4, 5, 1, 2}
// Output : arr[] = {2, 1, 5, 4}

#include <iostream>
using namespace std;
void printArray(int arr[], int n);
void reverseArray(int[], int);
void reverseArrayUsingRecursion(int[], int, int);
void swap(int &a, int &b);
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
    cout << "After Reversing \n";
    // reverseArray(arr, n - 1);
    reverseArrayUsingRecursion(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}

// For printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array element at " << i << "  : " << arr[i] << "\n";
    }
}
// For reversing an array
void reverseArray(int arr[], int n)
{
    int start = 0;
    while (start < n)
    {
        swap(arr[start], arr[n]);
        start++;
        n--;
    }
}
// For reversing an array using recursion
void reverseArrayUsingRecursion(int arr[], int start, int end)
{
    if (start > end)
        return;
    swap(arr[start], arr[end]);
    reverseArrayUsingRecursion(arr, start + 1, end - 1);
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
