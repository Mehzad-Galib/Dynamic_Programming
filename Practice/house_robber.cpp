// https://leetcode.com/problems/house-robber/description/

#include <bits/stdc++.h>
using namespace std;

int rec(int level, vector<int> &nums, vector<int> &dp)
{
    // base case
    if (level == 0)
        return nums[level];
    if (level < 0)
        return 0;

    // if the current state is solved
    if (dp[level] != -1)
        return dp[level];

    // formulating recursive solution
    int take = nums[level] + rec(level - 2, nums, dp);
    int anotherTake = rec(level - 1, nums, dp);

    return dp[level] = max(take, anotherTake);
}

int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    int n = nums.size();

    vector<int> dp(n + 1, -1);

    cout << rec(n - 1, nums, dp) << endl;
}