bool static solver(string &copy,string &st1,int k){
        if(copy==st1.substr(0,k)){
            return true;
        }
        return false;
   }
    int klengthpref(string arr[], int n, int k, string st){ 
        int count=0;
        if(k>st.size()) return 0;
        string copy=st.substr(0,k);
        for(int i=0;i<n;i++){
            string st1=arr[i];
            if(solver(copy,st1,k)) count++;
        }
        return count;
    }