int minDist(int a[], int n, int x, int y)
{
    int min_dist = INT_MAX;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x || a[i] == y)
        {
            if (prev == -1)
            {
                prev = i;
            }
            if (prev != -1 && a[prev] != a[i])
            {
                min_dist = min(min_dist, abs(prev - i));
            }
            prev = i;
        }
    }
    return min_dist == INT_MAX ? -1 : min_dist;
}