vector<int> countVowels(string &s, vector<vector<int>> &queries) {
        // code here
        int n = s.size();
                vector<int> prefix(n + 1, 0);
                for (int i = 0; i < n; i++) {
                    prefix[i + 1] = prefix[i] + (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u');
                }
                vector<int> ans;
                for (auto &q : queries) {
                    ans.push_back(prefix[q[1] + 1] - prefix[q[0]]);
                }
                return ans;
    }