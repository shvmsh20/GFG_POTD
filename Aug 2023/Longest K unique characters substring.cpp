int longestKSubstr(string s, int k) {
    // your code here
     int i=0,n=s.length(),j=0;
    int ans=-1;
    map<char,int>m;
    while(j<n){
        m[s[j]]++;
        while(m.size()>k){
            m[s[i]]--;
            if(m[s[i]]==0)m.erase(s[i]);
            i++;
        }
        if(m.size()==k)ans=max(ans,j-i+1);
        j++;
    }
    return ans;
    }