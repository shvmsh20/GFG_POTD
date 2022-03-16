//M-1 Recursion
void util(vector<int>& A, vector<vector<int>> &res, vector<int> &temp, int ind){
        if(ind==A.size()){
            res.push_back(temp);
            return;
        }
        util(A, res, temp, ind+1);
        temp.push_back(A[ind]);
        util(A, res, temp, ind+1);
        temp.pop_back();
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>> res;
        vector<int> temp;
        util(A, res, temp, 0);
        sort(res.begin(), res.end());
        return res;
    }

//M-2 iterative
vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        int n = A.size();
        int size = pow(2, n);
        vector<vector<int>> res;
        for(int i=0; i<size; i++){
            vector<int> temp;
            for(int j=0; j<n; j++){
                if(i & (1<<j)){
                    temp.push_back(A[j]);
                }
            }
            res.push_back(temp);
        }
        sort(res.begin(), res.end());
        return res;
    }    