vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1;
        set<int>s2;
        
        
        for(int i=0;i<a.size();i++)
        {
            s1.insert(a[i]);
        }
        vector<int> ans;
        
        for(int i=0;i<b.size();i++)
        {
            s2.insert(b[i]);
        }
        
        for (auto it : s1) 
        {
            if (s2.find(it) != s2.end()) 
            { 
                ans.push_back(it);        
            }
        }

        return ans;
    }
