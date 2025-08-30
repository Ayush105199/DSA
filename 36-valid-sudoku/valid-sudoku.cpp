class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> row;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (row.find(board[i][j]) != row.end()) return false;
                row[board[i][j]]++;
            }
        }

        
        for (int j = 0; j < 9; j++) {
            unordered_map<char, int> col;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                if (col.find(board[i][j]) != col.end()) return false;
                col[board[i][j]]++;
            }
        }

     
        for (int l = 0; l < 9; l += 3) {
            for (int k = 0; k < 9; k += 3) {
                unordered_map<char, int> box;
                for (int i = l; i < l + 3; i++) {
                    for (int j = k; j < k + 3; j++) {
                        if (board[i][j] == '.') continue;
                        if (box.find(board[i][j]) != box.end()) return false;
                        box[board[i][j]]++;
                    }
                }
            }
        }

        return true;
    }
};
