nt checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int, stack<int>> mp;
        for(int i=0; i<2*e; i=i+2){
            mp[A[i]].push(A[i+1]);
        }
        int j=0;
        while(j<2*e){
            if(mp.find(B[j])==mp.end()){
                return 0;
            }else{
                if(B[j+1]==mp[B[j]].top()){
                    mp[B[j]].pop();
                    j+=2;
                }else{
                    return 0;
                }
            }
        }
        return 1;
    }