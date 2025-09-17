string decodedString(string &s) {
        // code here
        string res;
        string currString = "";
        int currNum = 0;
        stack<pair<int, string>> st;
        for(char x: s){
            if(x=='['){
                st.push({currNum, currString});
                currNum = 0;
                currString = "";
            }else if(x==']'){
                pair<int, string> p = st.top();
                st.pop();
                int cnt = p.first;
                string temp = "";
                while(cnt--){
                    temp+= currString;
                }
                currString = p.second + temp;
            }else{
                if(x>='0' && x<='9'){
                    currNum = (currNum*10) + (x-'0');
                }else{
                    currString+= x;
                }
            }
        }
        return currString;
    }