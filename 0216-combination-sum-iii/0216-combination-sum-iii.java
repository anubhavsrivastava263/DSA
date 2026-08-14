class Solution {
    public void solve(int i,int k,int n,int target,List<Integer> temp,List<List<Integer>> ans){
        if(target==n){
            if(k==0){
                 ans.add(new ArrayList<>(temp));

            }
            return;
        }
        if(i==10 || k==0 || target>n)return;
        temp.add(i);
        solve(i+1,k-1,n,target+i,temp,ans);

        temp.remove(temp.size()-1);
        solve(i+1,k,n,target,temp,ans);
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<Integer> temp=new ArrayList<>();
        List<List<Integer>> ans=new ArrayList<>();
        int target=0;
        solve(1,k,n,target,temp,ans);
        return ans;

        
    }
}