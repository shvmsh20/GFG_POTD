int isValid(string str) {
        // code here
        int cnt=0;
        for(int i=0;i<str.length();)
        {
            string temp;
            while(i<str.length()&&str[i]!='.') {
                temp+=str[i];
                ++i;
            }
            while(i<str.length()&&str[i]=='.') ++i;
            
            if(temp.length()&&temp[0]=='0')
            {
                int j=0;
                while(j<temp.length()&&temp[j]=='0') ++j;
                if(j!=temp.length()) return false;
            }
            if(temp.length()){
                int val=stoi(temp);
                if((val<=255&&val>=0)) ++cnt;
                else return 0;
            }
        }
        return (cnt==4);
    }