#define INT_MIN -999999;
int thirdLargest(int a[], int n)
{
    int first = a[0];
    int second = INT_MIN;
    int third = INT_MIN;
    if (n < 3)
    {
        return -1;
    }
    for (int i = 1; i < n; i++) //NOTE starting from 1st element
    {
        if (a[i] > first)
        {
            third = second;
            second = first;
            first = a[i];
        }
        else if (a[i] > second)
        {
            third = second;
            second = a[i];
        }
        else if (a[i] >= third)
        {
            third = a[i];
        }
    };
    return third;
}
