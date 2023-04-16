int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        int max=*max_element( begin(arr), end(arr) );     

        int count = 0;
        
        vector<int> hash(max + 1, 0);
        
        // sieve-technique
        for(int i=0; i<N; ++i) {
            if( hash[ arr[i] ] <= 1 ) {
                // mark arr[i] all multiples
                for(int j = arr[i]; j <= max; j+= arr[i]) {
                    hash[ j ]++;
                }
            }
        }
        
        for(int i=0; i<N; i++) {
            if(hash[ arr[i] ] > 1)
                count++;
        }
        
        return count;
    }