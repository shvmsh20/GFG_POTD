int countBalanced(vector<string>& arr) {
        // code here
        unordered_map<int,int>mp;
        int vowel=0,cons=0;
        mp[0]=1;
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            string s=arr[i];
            for(int j=0;j<s.size();j++){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    vowel++;
                }
                else{
                    cons++;
                }
            }
            int diff=vowel-cons;
            count+=mp[diff];
            mp[diff]++;
        }
        return count;
    }