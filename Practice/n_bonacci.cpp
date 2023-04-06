#include <bits/stdc++.h>
using namespace std;

int dp[101];

int n, k;

int nBonacci(int n)
{
    // base case
    if (n <= k)
        return 1;

    // if the current state is solved
    if (dp[k] != -1)
        return dp[k];

    // solving recursive
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += nBonacci(n - i);
    }

    dp[n] = ans;
    return ans;
}

int main()
{
    cin >> n >> k;

    memset(dp, -1, sizeof(dp));

    cout << nBonacci(n) << endl;
}