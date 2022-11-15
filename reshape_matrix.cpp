class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rows = mat.size();
        int cols = mat[0].size();

        if(rows*cols < r*c || rows*cols> r*c ){
            return mat;
        }

      // push all element into the vector
        vector<int> v;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
             v.push_back(mat[i][j]);
            }
        }

      // convert vector to given matrix 
        int k=0;
        vector<vector<int>>ans(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j] = v[k];
                k++;
            }
        }
// return final matrix
        return ans;
    }
};
