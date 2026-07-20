class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int cnt=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
                res=max(res,cnt);
            }
          else if(s[i]==')'){
            cnt--;
          }
        }
        return res;
        
    }
};