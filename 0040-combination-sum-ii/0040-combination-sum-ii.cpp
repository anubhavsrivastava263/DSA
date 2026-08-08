class Solution {
public:
    vector<vector<int>> res;
    void solve(int i, int target, vector<int>& arr, vector<int>& temp,
               vector<vector<int>>& res) {

        if (target == 0) {
            res.push_back(temp);

            return;
        }
        for (int j = i; j < arr.size(); j++) {
            if (j > i && arr[j] == arr[j - 1])
                continue;
            if (arr[j] > target)
                break;
            temp.push_back(arr[j]);
            solve(j+1, target - arr[j], arr, temp, res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
            vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());

        solve(0, target, candidates, temp, res);
        return res;
    }
};