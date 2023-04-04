char firstRep (string s)
    {
        //code here.
        unordered_map<char, int> mp;
        int firstIndex=-1;
        char currAns = '#';
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end()){
                if(currAns=='#' || mp[s[i]]<firstIndex){
                    currAns = s[i];
                    firstIndex = mp[s[i]];
                }
            }else{
                mp[s[i]] = i;
            }
        }
        return currAns;
    }