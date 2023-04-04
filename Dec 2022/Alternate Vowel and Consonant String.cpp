string v="aeiou";
    bool isCharVowel(char ch)
    {
        for(auto &x: v)if(ch==x)return true;
        return false;
    }
    string helper(string &str,int *arr1,int *arr2)
    {
        int i=0,j=0,idx=0;
        bool flag=true;
        while(idx<str.size())
        {
            if(flag)
            {
                while(i<26&&(!arr1[i]))i++;
                str[idx++]=97+i;
                arr1[i]--;
                flag=false;
            }
            else
            {
                while(j<26&&(!arr2[j]))j++;
                str[idx++]=97+j;
                arr2[j]--;
                flag=true;
            }
        }
        return str;
    }
    string rearrange (string S, int N)
    {
        // your code here
        int arr1[26]={0},arr2[26]={0};
        int mn1=130,mn2=130,ct1=0,ct2=0;
        for(auto &ch: S)
        {
            if(isCharVowel(ch))
            {
                mn1=min(mn1,(int)ch);
                arr1[ch-97]++;
                ct1++;
            }
            else
            {
                mn2=min(mn2,(int)ch);
                arr2[ch-97]++;
                ct2++;
            }
        }
        if(abs(ct1-ct2)>1)return "-1";
        if(ct1==ct2)
        {
            if(mn1<mn2)return helper(S,arr1,arr2);
            else return helper(S,arr2,arr1);
        }
        else
        {
            if(ct1>ct2)return helper(S,arr1,arr2);
            else return helper(S,arr2,arr1);
        }
    }