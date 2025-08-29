bool check(vector<int>&v1, vector<int> &v2)
  {
      for(int i =0;i<26;i++)
      {
          if(v1[i]<v2[i])
          {
            return false;  
          }
      }
      return true;
  }
    string smallestWindow(string &s, string &p) {
        // code here
        int n1 = s.size(),i = 0,j = 0;
        int len = n1 + 1;
        int index1 = -1;
        vector<int> v1(26,0),v2(26,0);
        for(char c : p)
        v2[c-'a']++;
        while(i<n1 && j<n1)
        {
            v1[s[j]-'a']++;
            while(check(v1,v2))
            {
                if(j-i+1<len)
                {
                    len = j - i + 1;
                    index1 = i;
                }
                v1[s[i] - 'a']--;
                i++;
            }
            j++;
            
        }
        if(index1 == -1)
        return "";
        
        return s.substr(index1,len);
    }