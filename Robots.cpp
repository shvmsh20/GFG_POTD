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