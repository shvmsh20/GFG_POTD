void computeLPSArray(const string& pattern, vector<int>& lps) {
    int length = 0;
    int i = 1;
    lps[0] = 0;
    
    while (i < pattern.size()) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
    
    bool kmp(const string& s1, const string& s2) {
        if (s2.empty()) return true;
        if (s1.empty() || s2.size() > s1.size()) return false;
        
        int n = s1.size();
        int m = s2.size();
        vector<int> lps(m, 0);
        computeLPSArray(s2, lps);
        
        int i = 0;
        int j = 0;
        
        while (i < n) {
            if (s1[i] == s2[j]) {
                i++;
                j++;
            }
        
            if (j == m) {
                return true;
            } else if (i < n && s1[i] != s2[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }
    bool areRotations(string &s1, string &s2) {
        if(s1.length()==s2.length() && kmp((s1+s1),s2))
            return true;
        return false;
    }