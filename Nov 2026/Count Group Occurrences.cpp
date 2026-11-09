 int getCount(string &s, int k) {
        // code here
        unordered_map<char, int> countGroup;

             char prevChar;

             int ans = 0;

             for (auto i : s) {
                 if (prevChar != i) {
                     countGroup[i]++;
                     prevChar = i;
                 }
             }

             for (auto i : countGroup) {
                 if (i.second == k) {
                     ans++;
                 }
             }

             return ans;
    }