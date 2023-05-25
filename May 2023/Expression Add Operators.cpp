bool check(string &s,int target){
        int n = s.size();
        vector<long long> nums;
        vector<char> ops;
        string temp = "";
        for(int i=0;i<n;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
                ops.push_back(s[i]);
                long long h = std::stoll(temp);
                nums.push_back(h);
                temp="";
            }
            else{
                temp.push_back(s[i]);
            }
        }
        long long h = std::stoll(temp);
        nums.push_back(h);
        stack<long long> st;
        st.push(nums[0]);
        int i=1,j=0;
        while(i<nums.size() && j<ops.size()){
            if(ops[j]=='*'){
                long long top = st.top();
                st.pop();
                st.push(top*nums[i]);
                i++;
                j++;
            }
            else if(ops[j]=='-'){
                st.push(-1*nums[i]);
                j++;
                i++;
            }
            else{
                st.push(nums[i]);
                i++;
                j++;
            }
        }
        long long ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return (ans==target) ? true:false;
    }
    vector<string> addOperators(string S, int target) {
        vector<string> ans;
        solve(S,0,S.size(),"",target,ans);
        return ans;
    }
    void solve(string &s,int i,int n,string a,int target,vector<string> &ans){
        if(i>n-1){
            if(check(a,target)){
                ans.push_back(a);
            }
            return;
        }
        if(s[i]!='0'){
            for(int j=1;j<=n-i;j++){
                string temp = a;
                temp += s.substr(i,j);
                if(i+j>n-1){
                    solve(s,i+j,n,temp,target,ans);
                }
                else{
                    solve(s,i+j,n,temp+"+",target,ans);
                    solve(s,i+j,n,temp+"-",target,ans);
                    solve(s,i+j,n,temp+"*",target,ans);
                }
            }
        }
        else{
            if(i==n-1){
               solve(s,i+1,n,a+"0",target,ans);   
            }
            else{
                solve(s,i+1,n,a+"0+",target,ans);
                solve(s,i+1,n,a+"0-",target,ans);
                solve(s,i+1,n,a+"0*",target,ans);
            }
        }
    }