class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool valid = true;
        for(int i = 0 ; i<9;i++){
            unordered_set<int> horizontal;
            for(int j = 0; j< 9 ; j++){
                if(board[i][j]=='.')
                    continue;
                if(horizontal.find(board[i][j])!=horizontal.end())
                    valid = false;
                horizontal.insert(board[i][j]);
            }
        }

        for(int j = 0 ; j<9;j++){
            unordered_set<int> vertical;
            for(int i = 0; i< 9 ; i++){
                if(board[i][j]=='.')
                    continue;
                if(vertical.find(board[i][j])!=vertical.end())
                    valid = false;
                vertical.insert(board[i][j]);
            }
        }
        int col = 0;
        int row = 0;
        for(int i=0; i<9; i++){
            unordered_set<int> box;
            for(int j=col; j<col+3; j++){
                for(int k=row; k<row+3; k++){
                    if(board[j][k]=='.')
                        continue;
                    if(box.find(board[j][k])!=box.end())
                        valid = false;
                    box.insert(board[j][k]);
                }
            }
            if(row==6){
                col+=3;
                row=0;
            }
            else
                row+=3;
            
        }
    return valid;
    }
};
