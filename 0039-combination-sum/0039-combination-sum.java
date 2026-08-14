class Solution {
    
    public void solve(int i,int target ,int arr[],List<Integer> temp,List<List<Integer>> res){
        if(arr.length==i){
            if(target==0){
                res.add(new ArrayList<>(temp));
            }
            return;
        }
        if(target>=arr[i]){
        temp.add(arr[i]);
        solve(i,target-arr[i],arr,temp,res);
        temp.remove(temp.size()-1);
    }
      solve(i + 1,target,arr,temp,res);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer> temp=new ArrayList<>();
          List<List<Integer>> res=new ArrayList<>();
        Arrays.sort(candidates);
       

        solve(0,target,candidates,temp,res);
        return res;
        
        
    }
}