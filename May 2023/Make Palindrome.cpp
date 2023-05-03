bool makePalindrome(int n,vector<string> &arr){
        // Code here
       vector<string>v;
        for(int i=0;i<n;i++)
        {
           string str="";
           for(int j=arr[i].length()-1;j>=0;j--)
             str+=arr[i][j];
            v.push_back(str);
        }
        // for(int i=0;i<n;i++)
        // cout<<v[i]<<" ";
        // cout<<endl;
        map<string,int>mp,mp1,mp2;
        for(int i=0;i<n;i++)
        {
            //cout<<arr[i]<<" "<<v[i]<<endl;
            if(arr[i]==v[i])
            {
              mp[arr[i]]++;
            }
            else
            {
                mp1[arr[i]]++;
                mp2[v[i]]++;
            }
        }
        int c1=0,c2=0;
        for(auto &i:mp)
        {
           // cout<<i.first<<" "<<i.second<<endl;
            if(i.second%2==0)
            c1++;
            else
            c2++;
        }
        if(n%2!=0&&c2!=1)
        return false;
        else if(n%2==0&&c2!=0)
        return false;
        else{
            if(mp1!=mp2)
            return false;
            else
            return true;
        
    }
    }