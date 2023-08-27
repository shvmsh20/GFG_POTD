string reverseWord(string str)
    {
        // Your code goes here
        int n = str.size();
        int lo = 0, hi = n-1;
        while(lo<hi){
            swap(str[lo], str[hi]);
            lo++;
            hi--;
        }
        return str;
    }