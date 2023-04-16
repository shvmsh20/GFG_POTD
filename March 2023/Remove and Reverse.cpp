string removeReverse(string S) {
        // code here
        int n=S.length();
        int i=0,j=n-1;
        vector<int> freq(26,0);
        for(auto it:S) freq[it-'a']++;
        
        vector<int> pos(26,-1);
        bool front=true;
        while(i<=j)
        {
            if(front==true)
            {
                int ele=S[i]-'a';
                if(freq[ele]>1)
                    front=false; 
                if(freq[ele]==1)
                    pos[ele]=i;
                freq[ele]--;
                i++;
            }
            else
            {
                int ele=S[j]-'a';
                if(freq[ele]>1) 
                    front=true; 
                if(freq[ele]==1)
                    pos[ele]=j;
                freq[ele]--;
                j--;
            }
        }
        string str="";
        for(int i=0;i<n;i++)
        {
            int ele=S[i]-'a';
            if(pos[ele]==i) str.push_back(S[i]);
        }
        
        if(front==false) reverse(str.begin(),str.end());
        return str;
    }