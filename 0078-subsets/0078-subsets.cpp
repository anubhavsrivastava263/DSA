class Solution {
public:
   vector<vector <int>>result;
   vector<vector<int>> subsets(vector<int>& nums){
int n=nums.size();
for(int mask=0;mask<(1<<n);mask++){
    vector<int> temp;
    for(int i=0;i<=n;i++){
        if((mask&(1<<i))!=0){
            temp.push_back(nums[i]);
        }
    }
    result.push_back(temp);
}
return result;
    }
};