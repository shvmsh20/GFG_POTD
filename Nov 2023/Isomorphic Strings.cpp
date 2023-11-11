bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
         if (str1.size() != str2.size()) return false;
        unordered_map <char,char> map1, map2;
        for (int i = 0; i<str1.size(); i++) {
            if (map1.count(str1[i])) {
                if (map1.at(str1[i]) != str2[i]) return false;
            }
            else {
                map1[str1[i]] = str2[i];
            }
            if (map2.count(str2[i])) {
                if (map2.at(str2[i]) != str1[i]) return false;
            }
            else {
                map2[str2[i]] = str1[i];
            }
        }
        return true;
    
    }