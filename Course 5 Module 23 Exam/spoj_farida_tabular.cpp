// https://www.spoj.com/problems/FARIDA/en/

#include <bits/stdc++.h>
using namespace std;

int dp[101];
int arr[101];

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int farida(int n)
{
    // base cases
    if (n == 0)
        return 0;
    if (n == 1)
    {
        dp[1] = arr[1];
        return dp[1];
    }
    if (n == 2)
    {
        dp[2] = max(arr[1], arr[2]);
        return dp[2];
    }

    // check if ans already exists
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int pick = arr[n] + farida(n - 2);
    int notPick = farida(n - 1);

    int ans = max(pick, notPick);
    dp[n] = ans;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    // base case
    dp[1] = arr[1];
    dp[2] = max(arr[1], arr[2]);

    // loop through
    for (int i = 3; i <= n; i++)
    {
        int ans1 = arr[i] + dp[i - 2];
        int ans2 = dp[i - 1];
        int res = max(ans1, ans2);

        dp[i] = res;
    }

    cout << dp[n] << endl;
}