string largestSwap(string &s) {
        // code here
        string res=s;
        sort(res.rbegin(), res.rend());
        int i=0;
        while(i<s.length() && s[i]==res[i]) i++;
        if(i==s.length()) return s;
        int j=s.length()-1;
        while(j>i && s[j]!=res[i]) j--;
        swap(s[i], s[j]);
        return s;
    }