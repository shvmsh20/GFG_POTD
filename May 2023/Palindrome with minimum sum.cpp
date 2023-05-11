int minimumSum(string s) {
        // code here
         int n=s.size();
        int i=0,j=n-1;
        //while loop for going through basic definition of palindrome
        while(i<j){
            //if opp sides aren't equal then it's not a palindrome
            if(s[i]!='?' and s[j]!='?' and s[i]!=s[j]){
                return -1;
            }
            //convert question marks into characters if possible to make it as palindrome
            else if(s[i]=='?' and s[j]!='?'){
                s[i]=s[j];
            }
            //convert question marks into characters if possible to make it as palindrome
            else if(s[i]!='?' and s[j]=='?'){
                s[j]=s[i];
            }
            //if both opp are '?' then change it into prev one to get least abs difference
            else if(i!=0 and s[i]=='?' and s[j]=='?' and s[i-1]!='?'){
                s[i]=s[j]=s[i-1];
            }
            i++;
            j--;
        }
        int ans=0;
        //Now count the abs diff only half the side as palindrome is symmetric
        for(int i=1;i<=n/2;i++){
            if(s[i]=='?'){
                continue;
            }
            if(s[i-1]!='?'){
                ans+=(2*abs(s[i]-s[i-1]));
            }
        }
        return ans;

    }