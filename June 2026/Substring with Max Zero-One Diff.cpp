int maxSubstring(string &s) {
        // code here
        int mn = 0, zeros = 0, ones = 0, res = INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                zeros++;
            }else{
                ones++;
            }
            int currDiff = zeros - ones;
            res = max(res, currDiff-mn);
            mn = min(mn, currDiff);
        }
        return res;
    }