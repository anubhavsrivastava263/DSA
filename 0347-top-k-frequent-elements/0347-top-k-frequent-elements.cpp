class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int num:nums){
            freq[num]++;
        }
        priority_queue<pair<int ,int>> maxheap;
        for(auto [num,count]:freq){
            maxheap.push({count,num});
        }
        while(k>0 && !maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
            k--;

        }
        return ans;
        
    }
};