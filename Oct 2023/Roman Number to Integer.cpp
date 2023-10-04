int romanToDecimal(string &str) {
        // code here
        int n = str.length();
        map<char, int> mp{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
                        {'C', 100}, {'D', 500}, {'M', 1000}};
        
        if(n == 1){
            return mp[str[0]];
        }
        
        int sum = mp[str[n-1]];
        
        for(int i = n-2; i >= 0; --i){
            
            int curr = mp[str[i]];
            int next = mp[str[i+1]];
            
            if(curr < next){
                sum -= curr;
            }
            else{
                sum += curr;
            }
        }
        
        return sum;
    }