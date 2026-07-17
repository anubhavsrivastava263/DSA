class Solution {
public:
    int Max(vector<vector<int>>& mat, int n, int m, int col) {
        int maxvalue = -1;
        int index = -1;
        for (int i = 0; i < mat.size(); i++) {
            if (mat[i][col] > maxvalue) {
                maxvalue = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int row = Max(mat, n, m, mid);
           int left = (mid == 0) ? -1 : mat[row][mid - 1];
            int right = (mid == m - 1) ? -1 : mat[row][mid + 1];
            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            } else if (left > mat[row][mid]) {
                high = mid - 1;

            } else
                low = mid + 1;
        }
        return {-1,-1} ;
    }
};