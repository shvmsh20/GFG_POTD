int countPS(string &s) {
        // code here
        int n = s.size();
        vector<vector<int>> grid(n, vector<int> (n, 0));
        for(int gap=0; gap<n; gap++){
            int i=0, j=gap;
            while(j<n){
                if(gap==0){
                    grid[i][j] = 1;
                }else if(gap==1){
                    if(s[i]==s[j]){
                        grid[i][j] = 1;
                    }
                }else{
                    if(s[i]==s[j] && grid[i+1][j-1]){
                        grid[i][j] = 1;
                    }
                }
                i++;
                j++;
            }
        }
        int res = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(grid[i][j]){
                    res++;
                }
            }
        }
        return res;
    }