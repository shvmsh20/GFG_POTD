string maxSum(string w,char x[], int b[],int n){
          // code here    
           unordered_map<char,int>mp;

          for(int i=0;i<n;i++)
              mp[x[i]] = b[i];
          
           int curr_val=(mp.count(w[0])==1) ? mp[w[0]] : (int)(w[0]), res = curr_val;

          string curr="",ans;
          curr+=w[0];
          ans=curr;
          for(int i=1;i<w.size();i++){
              int temp = (mp.count(w[i])==1)? mp[w[i]] : (int)(w[i]);
              if(temp+curr_val>=temp)
                  curr_val+=temp;
              
              else{
                  curr_val = temp;
                  curr="";
              }
              curr+=w[i];
                if(curr_val>res){
                    res= curr_val;
                    ans=curr;
                }
          }
          return ans;
      }