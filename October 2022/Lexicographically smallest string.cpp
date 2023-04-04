 bool isPow2(int n){
      if(n==1){
          return true;
      }
      if(n%2!=0){
          return false;
      }
      return isPow2(n/2);
  }
    string lexicographicallySmallest(string S, int k) {
        // code here
        int n = S.length();
        if(isPow2(n)){
            if(k==1){
                return S;
            }else{
                k = k/2;
            }
        }else{
            k = k*2;
        }
        if(k>=n){
            return "-1";
        }
        stack<char> st;
        int count=0, i;
        for(i=0; i<n; i++){
            if(st.empty()){
                st.push(S[i]);
            }else{
                while(count<k && !st.empty() && st.top()>S[i]){
                    //cout << st.top() << " ";
                    st.pop();
                    count++;
                }
                st.push(S[i]);
                if(count==k){
                    break;
                }
            }
        }
        string p2;
        if(i+1<n){
            p2 = S.substr(i+1);
        }
   
        string p1;
        while(!st.empty()){
            p1+= st.top();
            st.pop();
        }
        reverse(p1.begin(), p1.end());
        string ans = p1+p2;
        if(count<k){
            int to_remove = k-count;
            ans = ans.substr(0, ans.length()-to_remove);
        }
        return ans;
    }