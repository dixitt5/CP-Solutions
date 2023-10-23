#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(vector<vector<int>> &ans, vector<int> &demo, vector<int> &arr, int k, int start)
    {
        if (k == 0)
        {
            ans.push_back(demo);
            return;
        }
        for (int i = start; i < arr.size(); i++)
        {
            if (i > start && arr[i] == arr[i - 1])
            {
                continue;
            }
            if (arr[i] > k)
            {
                break;
            }
            demo.push_back(arr[i]);
            solve(ans, demo, arr, k - arr[i], i + 1);
            demo.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> demo;
        sort(candidates.begin(), candidates.end());
        int start = 0;
        solve(ans, demo, candidates, target, start);
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> ans = s.combinationSum2(candidates, target);
    for (auto x : ans)
    {
        cout << "{";
        for (auto y : x)
        {
            cout << y << ",";
        }
        cout << "}";
        cout << endl;
    }
    cout << endl;
    return 0;
}