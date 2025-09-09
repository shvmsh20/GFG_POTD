int assignHole(vector<int>& a, vector<int>& b) {
        // code here
         int i=0,j=0,maxi=INT_MIN;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        while(i<a.size()){
            int diff=abs(b[j]-a[i]);
            maxi=max(maxi,diff);
            i++;
            j++;
        }
        return maxi;
    }