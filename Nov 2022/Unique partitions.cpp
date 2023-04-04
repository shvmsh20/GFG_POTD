vector<vector<int>> ans;

    

    void fun(int n,int x,vector<int> &v){

        if(n == 0){

            ans.push_back(v);

            return;

        }

        

        for(int i=x;i>0;i--){

            if(n-i>=0){

                v.push_back(i);

                fun(n-i,i,v);

                v.pop_back();

            }

        }

    }
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
         vector<int>v;

        fun(n,n,v);

        return ans;
    }