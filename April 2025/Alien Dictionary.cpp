string findOrder(vector<string> &words) {
        int V=26;
        vector<int>adj[V];
        
        int n = words.size();
        unordered_set<int> st;
        
        for(int i=0; i<n; i++){
            for(char c:words[i]){
                st.insert(c-'a');
            }
        }
        
        for(int i=1; i<words.size(); i++){
            string f = words[i-1];
            string s = words[i];
            int len1= f.size();
            int len2 = s.size();
            int j = 0;
            bool flag = false;
            while(j<min(len1, len2)){
                if(f[j] != s[j]){
                    adj[f[j]-'a'].push_back(s[j]-'a');
                    flag = true;
                    break;
                }
                j++;
            }
            
            if(flag==false){
                if(len1 > len2) return"";
            }
            
        }
        
        vector<int> indegree(V, 0);
        for(int i=0; i<V; i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int>q;
        for(int i=0; i<V; i++){
            if(st.find(i) != st.end() && indegree[i] == 0){
                q.push(i);
            }
        }
        
        
        vector<int> res;
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for(auto nbr:adj[curr]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
        
        string ans = "";
         if(res.size()!=st.size())return ans;
        
        for(int i=0; i<res.size(); i++){
            ans.push_back(res[i]+'a');
        }
        
        return ans;
        
     
    }