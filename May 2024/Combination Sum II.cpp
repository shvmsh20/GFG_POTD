void solve(vector<int> &arr, int target, int start, vector<int> &current, vector<vector<int>> &result){
        if(target == 0){
            result.push_back(current);
            return;
        }
        
        for(int i=start; i<arr.size(); i++){
            if(i>start && arr[i] == arr[i-1])
                continue;
            else if (target < arr[i])
                break;
            
            current.push_back(arr[i]);
            solve(arr, (target - arr[i]), (i+1), current, result);
            current.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        vector<vector<int>> result;
        vector<int> current;
        
        std::sort(arr.begin(), arr.end());
        solve(arr, k, 0, current, result);
        
        return result;
    }