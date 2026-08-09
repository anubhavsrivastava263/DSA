class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, int k, int n, int target, vector<int>& temp,
               vector<vector<int>>& ans) {
       
        
            if (target == n) {
                if (k == 0) {
                    ans.push_back(temp);
                }
                return;
            }
            if (i == 10 || k == 0 || target > n)
            return;

            temp.push_back(i);
            solve(i + 1, k - 1, n,target + i, temp, ans);

            temp.pop_back();
            solve(i + 1, k,n, target, temp, ans);
        }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<vector<int>> ans;
            vector<int> temp;
            int target = 0;
            solve(1, k, n,target, temp, ans);
            return ans;
        }
    };