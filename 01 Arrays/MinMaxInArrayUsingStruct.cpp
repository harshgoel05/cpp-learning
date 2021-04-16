// Maximum and minimum of an array

// Input  : arr[] = {1, 258, 3000}
// Minimum element is 1
// Maximum element is 3000

// Reference: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};
// METHOD 1 (Simple Linear Search)

struct Pair getMinMaxusingMethod1(int arr[], int n)
{
    struct Pair minmax;
    int i;

    // If there is only one element
    // then return it as min and max both
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax;
}

// METHOD 2 (Tournament Method)
struct Pair getMinMaxusingMethod2(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If there are more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMaxusingMethod2(arr, low, mid);
    mmr = getMinMaxusingMethod2(arr, mid + 1, high);

    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}

// METHOD 3 (Compare in Pairs)
struct Pair getMinMaxusingMethod3(int arr[], int n)
{
    struct Pair minmax;
    int i;

    // If array has even number of elements
    // then initialize the first two elements
    // as minimum and maximum
    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }

        // Set the starting index for loop
        i = 2;
    }

    // If array has odd number of elements
    // then initialize the first element as
    // minimum and maximum
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[0];

        // Set the starting index for loop
        i = 1;
    }

    // In the while loop, pick elements in
    // pair and compare the pair with max
    // and min so far
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
                minmax.max = arr[i];

            if (arr[i + 1] < minmax.min)
                minmax.min = arr[i + 1];
        }
        else
        {
            if (arr[i + 1] > minmax.max)
                minmax.max = arr[i + 1];

            if (arr[i] < minmax.min)
                minmax.min = arr[i];
        }

        // Increment the index by 2 as
        // two elements are processed in loop
        i += 2;
    }
    return minmax;
}

int main()
{
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = 6;

    struct Pair minmax1 = getMinMaxusingMethod1(arr, arr_size);
    struct Pair minmax2 = getMinMaxusingMethod2(arr, 0, arr_size - 1);
    struct Pair minmax3 = getMinMaxusingMethod3(arr, arr_size);

    cout << "Method 1: \n";

    cout << "Minimum: "
         << minmax1.min << endl;
    cout << "Maximum: "
         << minmax1.max << "\n";

    cout << "Method 2: \n";

    cout << "Minimum: "
         << minmax2.min << endl;
    cout << "Maximum: "
         << minmax2.max << "\n";

    cout << "Method 3: \n";

    cout << "Minimum: "
         << minmax3.min << endl;
    cout << "Maximum: "
         << minmax3.max << "\n";

    return 0;
}
