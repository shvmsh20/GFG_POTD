string reverseWords(string str) {
        // code here
        vector<string> temp;
        string word;
        for(char x: str){
            if(x=='.'){
                temp.push_back(word);
                word = "";
            }else{
                word+= x;
            }
        }
        temp.push_back(word);
        string res;
        for(int i=temp.size()-1; i>=0; i--){
            res+=temp[i];
            if(i!=0){
                res+='.';
            }
        }
        return res;
        
    }