int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> freq(n+1, 0);
        for(int x: citations){
            if(x>n){
                freq[n]++;
            }else{
                freq[x]++;
            }
        }
        int index = n, cnt = 0;
        while(index>=0 && (cnt+freq[index]<index)){
            cnt+= freq[index];
            // cout << freq[index] << endl;
            index--;
        }
        return index;
    }