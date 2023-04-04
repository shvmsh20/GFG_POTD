unordered_map<int,int>m;
    bool isPrime(int n){
        if(n==1)return false;
        for(int i=2;i<=pow(n,0.5);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int dfs(vector<int>&arr,int i){
        if(arr[i]==0)return 0;
        if(m.find(arr[i]-1)!=m.end()) return m[arr[i]-1];
        int t = 1 + dfs(arr,arr[i]-1);
        m[arr[i]-1]=t;
        return t;
    }
    int firingEmployees(vector<int> &arr, int n){
        // code here  
         int ans=0;
        for(int i=0;i<n;i++){
            int a = dfs(arr,i);
            if(arr[i]==0)continue;
            if(isPrime(a+i+1))ans++;
        }
        return ans;
        
       
    }