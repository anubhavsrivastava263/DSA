class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        if(n == 0) return 0;
         vector <int> waterlevel(n);
     int leftmax=0;
     for(int i=0;i<n;i++){
        leftmax=max(leftmax,height[i]);
        waterlevel[i]=leftmax;

     }
        int rightmax=0;
        for(int i=n-1;i>=0;i--){
            rightmax=max(rightmax,height[i]);
            waterlevel[i]=min(rightmax,waterlevel[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans +=waterlevel[i]-height[i];
        }
        return ans;
    }
};