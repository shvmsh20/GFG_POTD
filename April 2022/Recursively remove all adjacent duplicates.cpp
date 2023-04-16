string remove(string s){
        // code here
        while (1)   {
        int n = s.size(), i = 0;
        string tmp;
        while (i < n)   {
            int j = i;
            while (++j < n && s[i] == s[j]);
            if (j == i+1) tmp += s[i];
            i = j;
        }
        if (s.size() == tmp.size()) break;
        s = tmp;
    }
    return s;
    }