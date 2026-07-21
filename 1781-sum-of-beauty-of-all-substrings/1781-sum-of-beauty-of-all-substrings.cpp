class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> count(256, 0);
            for (int j = i; j < s.size(); j++) {
                count[s[j]]++;

                int maxval=*max_element(count.begin(),count.end());
                int minval=INT_MAX;

                for(int c:count){
                    if(c>0){
                        minval=min(minval,c);
                    }

                }
                int beauty=maxval-minval;
                ans+=beauty;
            }
        }
        return ans;
    }
};