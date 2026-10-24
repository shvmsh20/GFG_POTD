 bool isPossible(int n, int m, string& s) {
        // code here
        int lowr = 0, lowc = 0, highr = 0, highc = 0, r=0,c=0;
        
        for (auto it:s)
        {
            if (it=='L')
                c--;
            if (it=='R')
                c++;
            if (it=='U')
                r--;
            if (it=='D')
                r++;
            
            lowr = min(lowr, r);
            lowc = min(lowc,c);
            highr = max(highr,r);
            highc = max(highc,c);
        }
        
        if (highr-lowr<n && highc-lowc<m)
            return 1;
        return 0;
    }