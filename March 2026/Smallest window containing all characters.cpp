string minWindow(string &s, string &p) {
        // code here
        int index = -1, resSize = INT_MAX, left = 0;
        unordered_map<char, int> pMap, sMap;
        for(char x: p){
            pMap[x]++;
        }
        int pMapSize = pMap.size(), counter = 0;
        for(int right=0; right<s.size(); right++){
            if(pMap.find(s[right])!=pMap.end()){
                sMap[s[right]]++;
                if(sMap[s[right]]==pMap[s[right]]){
                    counter++;
                }
            }
            while(counter==pMapSize){
                if((right-left+1)<resSize){
                    index = left;
                    resSize = right-left+1;
                }
                if(pMap.find(s[left])!=pMap.end()){
                     sMap[s[left]]--;
                     if(sMap[s[left]]<pMap[s[left]]){
                         counter--;
                     }
                     if(sMap[s[left]]==0){
                         sMap.erase(s[left]);
                     }
                }
                left++;
            }
        }
        if(index==-1){
            return "";
        }
        return s.substr(index, resSize);
    }