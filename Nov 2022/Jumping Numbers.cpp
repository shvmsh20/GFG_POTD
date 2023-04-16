long long jumpingNums(long long X) {
        // code here
        if(X<=9) return X;
        queue<long long> q;
        
        for(int i=1;i<=9;i++) q.push(i);
        
        bool found=false;
        long long ans=0;
        while(!q.empty() && !found)
        {
            int qsize=q.size();
            while(qsize--)
            {
                long long num=q.front(),lastDigit;
                q.pop();

                if(num>X){
                    found=true;
                    break;
                }
                ans=num;
                
                lastDigit=num%10;

                if(lastDigit!=0) 
                    q.push(num*10+lastDigit-1);
                if(lastDigit!=9)
                    q.push(num*10+lastDigit+1);
            }
        }
    
        return ans;
    }