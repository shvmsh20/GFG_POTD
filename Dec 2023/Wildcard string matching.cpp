 bool solve(int i, int j, int n, int m, string &wild, string &pattern){
        if(i==n && j==m){
            return true;
        }
        if(i==n || j==m){
            return false;
        }
        if(wild[i]!='*' && wild[i]!='?' && (wild[i]!=pattern[j])){
            return false;
        }
        if(wild[i]=='?' || (wild[i]==pattern[j])){
            return solve(i+1, j+1, n, m, wild, pattern);
        }
        for(int k = j; k<=m; k++){
            if(solve(i+1, k, n, m, wild, pattern)){
                return true;
            }
        }
        return false;
        
    }
    bool match(string wild, string pattern)
    {
        // code here
        int n = wild.size(), m = pattern.size();
        solve(0, 0, n, m, wild, pattern);
    }