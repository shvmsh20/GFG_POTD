static bool cmp(val a, val b){
        return a.second<b.second;
    }
    int maxChainLen(struct val p[],int n){
        //Your code here
        sort(p, p+n, cmp);
        int count=1;
        int end = p[0].second;
        for(int i=1; i<n; i++){
            if(p[i].first>end){
                count++;
                end = p[i].second;
            }
        }
        return count;
    }