#include <bits/stdc++.h>
using namespace std;

int arr[101];

int fibo(int n)
{
    // base case
    if (n <= 2)
        return 1;

    // check if current state is already solved
    if (arr[n] != -1)
    {
        return arr[n];
    }

    // calculate the result from smaller sub-problems
    int ans = fibo(n - 1) + fibo(n - 2);
    arr[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = -1;
    }
    cout << fibo(n) << endl;
}