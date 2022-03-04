vector<int> canMakeTriangle(vector<int> A, int n){
        // code here
        vector<int> v;
        for(int i=2; i<n; i++){
            int a = A[i], b = A[i-1], c = A[i-2];
            if(a+b>c && b+c>a && a+c>b) v.push_back(1);
            else v.push_back(0);
        }
        return v;
    }