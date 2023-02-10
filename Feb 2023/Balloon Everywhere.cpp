int maxInstance(string s){
         map<char,int>mp;

     

        

      

        string temp="balon";

        for(int i=0;i<s.size();i++){

            mp[s[i]]++;

        

        }

        int ans=INT_MAX;

        int x=0;

        

        for(int i=0;i<5;i++){

            x=mp[temp[i]];

           // cout<<x<<endl;

            if(temp[i]=='l'||temp[i]=='o')

            ans=min(ans,x/2);

            else ans=min(ans,x);

        }

        return ans;
    }