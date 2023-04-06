#include <bits/stdc++.h>
using namespace std;

int dp[101];

int trib(int n)
{
    // base case
    if (n <= 3)
        return 1;

    // handling if the current state is already solved
    if (dp[n] != -1)
        return dp[n];

    int ans = trib(n - 1) + trib(n - 2) + trib(n - 3);
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    // defining all the values of dp array to -1
    memset(dp, -1, sizeof(dp));

    cout << trib(n) << endl;
}