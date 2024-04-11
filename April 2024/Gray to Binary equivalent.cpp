int grayToBinary(int n)
    {
        
        // Your code here
        if(n==0) return 0;
        string bin = "";
        while(n){
            bin += to_string(n%2); n /= 2;
        } 
        reverse(bin.begin(), bin.end());
        string gray = "";
        gray.push_back(bin[0]);
        for(int i=1; i<bin.size(); i++){ 
            int idea = (bin[i]-'0')^(gray.back()-'0');
            gray += to_string(idea);
        }
        return stoi(gray, 0, 2);
        
    }