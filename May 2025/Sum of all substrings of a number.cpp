int sumSubstrings(string &s) {
        // code here
        int res = 0, n = s.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                string t = s.substr(i, j-i+1);
                int num = stoi(t);
                res+= num;
            }
        }
        return res;
    }