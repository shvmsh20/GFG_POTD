bool sameFreq(string s)
	{
	    // code here 
	     int n = s.length();
        vector<int> v(26,0);
        for(int i = 0; i<n; i++){
            char ch = s[i];
            v[ch-'a']++;
        }
        int mini = 1e6;
        for(int i = 0; i<26; i++){
            if(v[i]!=0){
                mini = min(mini,v[i]);
            }
        }
        int cnt = 0;
        int minicnt = 0;
        for(int i = 0; i<26; i++){
            if(v[i]!=0){
                if(v[i]>mini){
                    if((v[i]-mini)>1)return false;
                    cnt++;
                }
                if(v[i]==mini)minicnt++;
            }
        }
        if(cnt==0)return true;
        if(cnt==1)return true;
        if(cnt>1 && minicnt>1)return false;
        if(cnt>1 && minicnt==1 && mini==1)return true;
        if(cnt>1 && minicnt==1 && mini>1)return false;
        
        
        return true;
	}