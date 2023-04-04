struct Node{
        int plates;
        int coins;
        
    };
    
    static bool cmp(Node &a, Node &b){
        return a.coins>b.coins;
    }
    
    int maxCoins(int A[], int B[], int T, int n) {
        // code here
        Node arr[n];
        for(int i=0; i<n; i++){
            arr[i].plates = A[i];
            arr[i].coins = B[i];
        }
        sort(arr, arr+n, cmp);
        long  ans=0;
        int i=0;
        while(T>0 && i<n){
            if(arr[i].plates<=T){
                T-= arr[i].plates;
                ans+= arr[i].coins*arr[i].plates;
            }else{
                ans+=arr[i].coins*T;
                T=0;
            }
            i++;
        }
        return ans;
    }