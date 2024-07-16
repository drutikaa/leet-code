class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> output;
        vector<vector<int>> arr(m + n - 1);
        
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                arr[i + j].push_back(mat[i][j]);
            }
        }
        
        bool left = false;
        
        for(int i = 0; i < arr.size(); ++i)
        {
            for(int j = 0; j < arr[i].size(); ++j)
            {
                output.push_back(left ? arr[i][j] : arr[i][arr[i].size() - 1 - j]);
            }
            left = !left;
        }
        return output;
    }
};
