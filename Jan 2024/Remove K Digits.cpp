string removeKdigits(string s, int k) {
        deque<char>dq;
         int n=s.length();
         for(int i=0;i<n;i++){
            while(!dq.empty()&& dq.back()>s[i] && k>0){
                if(dq.back()!='0')
                k--;
                dq.pop_back();
            }
            dq.push_back(s[i]);
            
            
         }
        while(k-- && !dq.empty()){
            dq.pop_back();
        }
        while(!dq.empty() &&  dq.front()=='0')dq.pop_front();
        if(dq.size()==0) return "0";
         string ans;
         for(auto &x:dq){
             ans.push_back(x);
         }
         return ans;
    }