string chooseandswap(string str){
        // Code Here
        int n = str.size();
        
        set<char> s;
        
        for(int i = 0; i < n; i++)
        {
            s.insert(str[i]);
        }
        
        for(int i = 0; i < n; i++)
        {
            s.erase(str[i]);
            
            auto it = s.begin();
            
            if(it == s.end())
            break;
            
            char c = *it;
            
            if(c < str[i])
            {
                char c1 = str[i];
                
                for(int j = 0; j < n; j++)
                {
                    if(str[j] == c1)
                    {
                        str[j] = c;
                    }
                    else if(str[j] == c)
                    {
                        str[j] = c1;
                    }
                }
                
                break;
            }
            
        }
        
        return str;
    }