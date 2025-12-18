static bool comp(int a,int b){
        bool aOdd=(a%2 != 0);
        bool bOdd=(b%2 != 0);
        
        if(aOdd && bOdd){
            return a>b;
        }
        
        if(!aOdd && !bOdd){
            return a<b;
        }
        
        return aOdd;
    }
    
    void sortIt(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end(),comp);
    }