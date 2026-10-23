class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int u = 0, d = rows-1;
        while(u<=d){
            int mid = u+(d-u)/2;
            if(target>matrix[mid][columns-1]){
                u=mid+1;
            }
            else{
                d=mid;
                if(d==u)
                    break;
            }
        }
        int l=0, r = columns-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(target>matrix[d][mid]){
                l=mid+1;
            }
            else if(target<matrix[d][mid]){
                r=mid-1;
            }
            else if(target==matrix[d][mid]){
                return true;
            }            
        }
        return false;
    }
};
