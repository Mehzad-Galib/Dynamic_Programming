#include <bits/stdc++.h>
using namespace std;

const int N = 101;

int dp[N];

int fibo(int n)
{
    // checking base case
    if (n <= 2)
        return 1;

    // checking if current state is already solved
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // calculate the result from smaller sub-problems
    int ans = fibo(n - 1) + fibo(n - 2);
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

    cout << fibo(n) << endl;
}