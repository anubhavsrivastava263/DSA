class Solution {
    public void solve(int i,int target,int arr[],List<Integer> temp,List<List<Integer>> res){
        if(target==0){
            res.add(new ArrayList<>(temp));
            return;
        }
        for(int j=i;j<arr.length;j++){
            if(j>i && arr[j]==arr[j-1])continue;
            if(arr[j]>target)break;
            temp.add(arr[j]);
            solve(j+1,target-arr[j],arr,temp,res);
            temp.remove(temp.size()-1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<Integer> temp=new ArrayList<>();
        List<List<Integer>> res=new ArrayList<>();
        Arrays.sort(candidates);
        solve(0,target,candidates,temp,res);
        return res;
        
    }
}