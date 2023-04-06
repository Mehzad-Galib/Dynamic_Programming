#include <bits/stdc++.h>
using namespace std;

int arr[100];

long long int fib(int n)
{
    if (n <= 2)
        return 1;

    // check if fib(n) is already calculated

    if (arr[n] != 0)
    {
        return arr[n];
    }
    arr[n] = fib(n - 1) + fib(n - 2);

    return arr[n];
}

int main()
{
    cout << fib(45) << endl;
}