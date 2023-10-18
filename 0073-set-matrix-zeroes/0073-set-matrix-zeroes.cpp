class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size() , m= matrix[0].size();
        set<int> I;
        set<int> J;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    I.insert(i);
                    J.insert(j);
                }
            }
        }
        int iSize = I.size() , jSize = J.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(I.count(i) > 0 || J.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};