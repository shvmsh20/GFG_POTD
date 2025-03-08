int solve(int i1, int i2, string &s, int n){
        while(i1>=0 && i2<n){
            if(s[i1]!=s[i2]){
                break;
            }
            i1--;
            i2++;
        }
        return i2-i1-1;
    }
    string longestPalindrome(string &s) {
        // code here
        int n = s.size();
        int mxLength = 1, index = 0;
        for(int i=0; i<n; i++){
            int len = solve(i, i, s, n);
            if(len>mxLength){
                mxLength = len;
                index = i-(len/2);
            }
            len = solve(i, i+1, s, n);
            if(len>mxLength){
                mxLength = len;
                index = i-(len/2)+1;
            }
        }
        return s.substr(index, mxLength);
    }