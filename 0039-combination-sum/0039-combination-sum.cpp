class Solution {
public:
vector<vector <int>> res;
void solve(int i,int target,vector<int> &arr,vector<vector <int>> &res,vector<int> & temp){
    if(i==arr.size()){
        if(target == 0){
            res.push_back(temp);
    

        }
        return;
    }
    if(arr[i] <= target){
        temp.push_back(arr[i]);
        solve(i,target-arr[i],arr,res,temp);
        temp.pop_back();
    }
    solve(i+1,target,arr,res,temp);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0,target,candidates,res,temp);
        return res;
       
        

            
        
        
    }
};