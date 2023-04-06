#include <bits/stdc++.h>
using namespace std;

int minval(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int cost[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    int n = sizeof(cost);

    for (int i = 2; i < n; i++)
    {
        cost[i] += minval(cost[i - 1], cost[i - 2]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << cost[i] << " ";
    }
    // cout << minval(cost[n - 1], cost[n - 2]) << endl;
}