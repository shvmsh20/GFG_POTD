bool kPangram(string str, int k) {
        // code here
         vector<int>v(26,0);
        int pt=0;
        for(auto it:str)
        {
            if(it!=' ')pt++,v[it-'a']|=1;
        }
        int ct=accumulate(v.begin(),v.end(),0LL);
        //cout<<ct<<endl;
        return 26<=pt&&26-ct<=k;
    }