int minimizeSum(int N, vector<int> arr) {
        // code here
        int sum=0;
        multiset<int>st;
        for(auto i:arr){
            st.insert(i);
        }
        while(!st.empty()){
            if(st.size()==1)break;
            int a=*st.begin();
            st.erase(st.begin());
            int b=*st.begin();
            st.erase(st.begin());
            sum+=(a+b);
            st.insert(a+b);
        }
        return sum;
    }