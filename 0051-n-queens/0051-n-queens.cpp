class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, int n) {

        // Column
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Row
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q')
                return false;
        }

        // Upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void Nqueens(vector<vector<char>>& board, int row, int n,
                 vector<vector<string>>& res) {

        if (row == n) {

            vector<string> solution;

            for (int i = 0; i < n; i++) {
                solution.push_back(string(board[i].begin(), board[i].end()));
            }

            res.push_back(solution);
            return;
        }

        for (int j = 0; j < n; j++) {

            if (isSafe(board, row, j, n)) {

                // Choose
                board[row][j] = 'Q';

                Nqueens(board, row + 1, n, res);

                // Backtrack
                board[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<char>> board(n, vector<char>(n, '.'));

        vector<vector<string>> res;

        Nqueens(board, 0, n, res);

        return res;
    }
};