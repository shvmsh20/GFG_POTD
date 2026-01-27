class Solution {
  public:
     int n, m;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    bool f(int i, int j, int k, string&s, vector<vector<char>> &mat){
        if(k>=s.size()) return 1;
        
        if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != s[k])
            return false;
            
        char temp = mat[i][j];
        mat[i][j] = '#'; 
        
        for(int idx = 0;idx<4;idx++){
            int x = i + dx[idx];
            int y = j + dy[idx];
            
            if(f(x,y,k+1,s,mat)){
                return 1;
            }
        }
        mat[i][j] = temp;
        return 0;
    }
    
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        n = mat.size();
        m = mat[0].size();
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(f(i,j,0,word,mat)){
                    return 1;
                }
            }
        }
        
        return 0;
    }
};