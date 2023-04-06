#include <bits/stdc++.h>
using namespace std;

const int N = 101;

int dp[N];

void fibo(int n)
{
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // return dp[n];
}

int main()
{
    int n;
    cin >> n;

    // handle base case(s)
    dp[1] = 1;
    dp[2] = 1;

    // loop through the states, and calculate the answer from smaller sub-problems
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    // fibo(n);

    cout << dp[n] << endl;
}