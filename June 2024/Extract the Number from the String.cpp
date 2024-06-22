long long ExtractNumber(string sentence) {

        // code here
        long long ans = -1;
        bool flag = false;           // to check if 9 is present or not 
        long long temp = 0;          // to store current number
        
        for(int i = 0; i < sentence.size(); i++)
        {
            if(sentence[i] - '0' >= 0 && sentence[i]-'0' <= 9)
            {
                temp = temp*10 + sentence[i]-'0';
                
                if(sentence[i]-'0' == 9) {
                    flag = true;
                }
            }
            
            if(sentence[i] == ' ' && temp != 0)
            {
                if(!flag)
                {
                    ans = max(ans, temp);
                    temp = 0;  
                }
                else{
                    temp = 0;
                    flag = false;
                }
                
            }
        }
        
        // for last number if exit at  the end of string
        if(temp != 0 && !flag)
            {
                ans = max(ans, temp);
            }
        return ans;
    }