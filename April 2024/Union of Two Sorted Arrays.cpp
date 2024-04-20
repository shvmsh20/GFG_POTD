vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> s;
        vector<int> res;
        for(int i=0; i<n; i++){
            s.insert(arr1[i]);
        }
        for(int i=0; i<m; i++){
            s.insert(arr2[i]);
        }
        for(auto it=s.begin(); it!=s.end(); it++){
            res.push_back(*it);
        }
        return res;
        
    }