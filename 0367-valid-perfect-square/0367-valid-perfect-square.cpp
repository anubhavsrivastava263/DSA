class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1) return true;

        long long low=1;
        long long high=num;

        while(low<=high){
            long long mid=(low+high)/2;
            long long sqr=mid*mid;
            if(sqr==num)return true;
            else if(sqr>num){
                high=mid-1;
            }
            else low=mid+1;
        }
        return false;


      
    }
};