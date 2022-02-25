string moveRobots(string s1, string s2){
        int n = s1.size();
        int i=0, j=0;
        while(i<n && j<n){
            if(s1[i]=='#') i++;
            else if(s2[j]=='#') j++;
            else if(s1[i]!=s2[j]) return "No";
            else if(s1[i]=='B' && i>j) return "No";
            else if(s1[i]=='A' && i<j) return "No";
            else{
                i++;
                j++;
            }
        }
        return "Yes";
    }

    string moveRobots(string s1, string s2){
        // code here 
        int n = s1.size(), i;
        queue<pair<char, int>> q;
        for(i=0; i<n; i++){
            if(s2[i]!='#'){
                q.push({s2[i], i});
            }
        }
        for(i=0; i<n; i++){
            if(!q.empty() && s1[i]!='#'){
                pair<char, int> p = q.front();
                q.pop();
                if(p.first!=s1[i]) return "No";
                else if(s1[i]=='B' && i>p.second) return "No";
                else if(s1[i]=='A' && i<p.second) return "No";
            }
        }
        if(q.empty()) return "Yes";
        else return "No";
    }