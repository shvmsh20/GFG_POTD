void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
          map<int,int> hashmap;
        for(int i = 0; i < N ; i++){
            hashmap[arr[i]]++;
        }
        for(int i = 0; i < N ; i++){
            arr.at(i)=0;
        }
        for(auto iter : hashmap){
            if(iter.first <= N)
            arr[iter.first-1] = iter.second;
        }
    }