#include <bits/stdc++.h>
using namespace std;

int dp[45];

int stairs(int n)
{
    // base case
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    // if current state is already solved
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // solving for smaller sub-problems or recursion
    int ans = stairs(n - 1) + stairs(n - 2);
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << stairs(n) << endl;
}