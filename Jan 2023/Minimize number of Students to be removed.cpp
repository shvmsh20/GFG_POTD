int removeStudents(int H[], int N) {
        // code here
        vector<int>arr;
        
        for(auto i=0;i<N;i++){
            if(arr.size()==0 or arr.back()<H[i])arr.push_back(H[i]);
            else{
                auto lo=lower_bound(arr.begin(),arr.end(),H[i]);
                *lo=H[i];
            }
        }
        return N-arr.size();
        
    }