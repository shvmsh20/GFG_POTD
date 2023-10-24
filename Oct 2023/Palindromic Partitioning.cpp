bool isPalindrome(int s, int e, string &str){
        while(s<e){
            if(str[s]!=str[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    int solve(int index, int n, string &s, vector<int> &dp){
        if(index==n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int res = INT_MAX-1;
        for(int i = index; i<n; i++){
            if(isPalindrome(index, i, s)){
                int t = 1+solve(i+1, n, s, dp);
                res = min(t, res);
            }
        }
        return dp[index] =  res;
    }
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        vector<int> dp(n, -1);
        return solve(0, n, str, dp)-1;
    }