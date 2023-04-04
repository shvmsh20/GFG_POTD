string BalancedString(int N) {
        string ans = "", temp = "abcdefghijklmnopqrstuvwxyz", x = to_string(N);
        
        int time = N/26, m = N%26, sum = accumulate(begin(x), end(x), 0);
        while(time--)ans += temp;
        
        if(N&1)
            if(sum & 1)
                ans += temp.substr(0, (m-1)/2) + temp.substr(26-(m+1)/2, 26);
            else
                ans += temp.substr(0, (m+1)/2) + temp.substr(26-(m-1)/2, 26);
        else 
            ans += temp.substr(0, m/2) + temp.substr(26-(m/2), 26);
            
        return ans;
    }