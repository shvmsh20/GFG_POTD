vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    set<int> s;
    s.insert(arr[0]);
    vector<int> res;
    res.push_back(-1);
    s.insert(arr[0]);
    for(int i=1; i<n; i++){
        auto it = s.lower_bound(arr[i]);
        if(it==s.begin()){
            res.push_back(-1);
        }else{
            res.push_back(*(--it));
        }
        s.insert(arr[i]);
    }
    return res;
    
}