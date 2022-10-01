//Problem Question : https://leetcode.com/problems/next-permutation/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
//solution :
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int x = -1, y;
        for (int i = (nums.size() - 1); i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                x = i - 1;
                break;
            }
        }
        if (x == -1)
            reverse(nums.begin(), nums.end());
        else
        {
            for (int i = (nums.size() - 1); i > x; i--)
            {
                if (nums[x] < nums[i])
                {
                    y = i;
                    break;
                }
            }
            swap(nums[x], nums[y]);
            reverse(nums.begin() + (x + 1), nums.end());
        }
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}