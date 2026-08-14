class Solution {
    public boolean isSafe(char[][] board,int row,int col,int n,List<List<String>> ans){
        for(int j=0;j<n;j++){
           if(board[row][j]=='Q') {
            return false;
        }
        }
        for(int i=0;i<n;i++){
             if(board[i][col]=='Q'){
                return false;
             }

        }
        for(int i=row,  j=col;j>=0&&i>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
         for(int i=row,  j=col;j<n&&i>=0;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
         }
         return true;

    }
    public void Nqueens(char[][] board,int row,int n,List<List<String>> ans){
        if(row==n){
            List<String> solution=new ArrayList<>();
            for(int i=0;i<n;i++){
                 solution.add(new String(board[i]));

            }
            ans.add(solution);
           
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board ,row,j,n,ans)){
                board[row][j]='Q';
                Nqueens(board,row+1,n,ans);
                board[row][j]='.';

            }
        }
    }
    public List<List<String>> solveNQueens(int n) {
       char[][] board = new char[n][n];

     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = '.';
            }
        }
        List<List<String>> ans=new ArrayList<>();
        Nqueens(board,0,n,ans);
        return ans;


        
        
    }
}