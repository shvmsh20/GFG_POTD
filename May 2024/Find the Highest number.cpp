int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int i=0;
        while(a[i+1]>a[i] && i< a.size()-1){
            i++;
        }
        return a[i];
    }