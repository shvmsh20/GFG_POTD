int longestPerfectPiece(int arr[], int N) {
        // code here
        multiset<int> ms;
        int k=0, res = 0;
        for(int i=0; i<N; i++){
            ms.insert(arr[i]);
            while(k<i && *ms.rbegin()-*ms.begin()>1){
                ms.erase(arr[k++]);
            }
            res = max(res, i-k+1);
        }
        return res;
    }