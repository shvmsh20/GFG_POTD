int minVal(int a, int b) {
        // code here
        int count=0;
        while(b){
            if(b&1){
                count++;
            }
            b = b>>1;
        }
        stack<int> st;
        
        int pos=0;
        while(a){
            if(a&1){
                st.push(pos);
            }
            pos++;
            a = a>>1;
        }
        int res=0;
        while(count){
            if(st.empty()){
                break;
            }else{
                int pos = st.top();
                st.pop();
                res = res | (1<<pos);
            }
            count--;
        }
        pos=0;
        while(count--){
            while(res & (1<<pos)){
                pos++;
            }
            res = res | (1<<pos);
        }
        return res;
    }