int kthSmallest(vector<int> &arr, int k) {
        // code here
         multiset<int> ms;
        int n =arr.size();
        for(int i =0;i< n;i++){
           ms.insert(arr[i]);
           if(ms.size() >k){
               ms.erase(prev(ms.end()));
           }
        }
        return *prev(ms.end());
    }