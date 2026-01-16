int minMen(vector<int>& arr) {
        // code here
         int n=arr.size();
        
        vector<array<int,2>>v;
        for(int i=0;i<n;i++){
            int lef= i-arr[i];
            int rig= i+arr[i];
            if(lef<=rig)
            v.push_back({lef,rig});
        }
        sort(v.begin(),v.end(),[&](array<int,2>&a,array<int,2>&b)->bool{
            if(a[0]!=b[0]) return a[0]<b[0];
            return a[1]>b[1];
        });
        
      

        
        // for(auto it:v){
        //     int l= it[0];
        //     int r= it[1];
        //     if(rig<l){
                
        //         if(rig!=-1) NewV.push_back({lef,rig});
        //         lef=l;
        //         rig=r;
                
        //     }
        //     else if(l==lef){
        //         if(r>rig){
        //             rig=r;
        //         }
        //     }
        //     else{
        //         if(l<=rig){
        //             NewV.push_back({lef,rig});
        //             lef=l;
        //             rig=r;
        //         }
        //     }
        // }
        // if(rig!=-1){
        //     NewV.push_back({lef,rig});
        // }
        
        // for(auto it:v) cout<<it[0]<<" "<<it[1]<<endl;
        // cout<<endl;
        int cnt=0;
        int m= v.size();
        int lef= -1;
        int rig= -1;
        int nxtrig=-1;
        int nxtlef= -1;
      //  if(lef!=0) return -1;
        for(int i=0;i<m;i++){
            int l= v[i][0];
            int r= v[i][1];
            if(l<=rig){
                if(nxtrig<=r){
                    nxtlef= l;
                    nxtrig=r;
                }
            }
            else if(l==rig+1){
               
                if(nxtrig>r){
                    cnt++;
                  
                    rig= nxtrig;
                    lef= nxtlef;
                    nxtlef=-1;
                    nxtrig=-1;
                    // cout<<lef<<" sdf "<<rig<<endl;
                }
                else{
                 // cout<<l<<" "<<r<<endl;
                    cnt++;
                    lef=l;
                    rig=r;
                    if(rig>=n-1) return cnt;
                }
            }
            else{
               //cout<<nxtlef<<" ss "<<nxtrig<<endl;
                if(nxtrig>rig){
                    lef=nxtlef;
                    rig= nxtrig;
                    // cout<<lef<<"ss  "<<rig<<endl;
                    nxtrig=-1;
                    nxtlef=-1;
                    cnt++; // doubt try removing it..
                    i--;
                }
                else return -1;
            }
        }
        
       // cout<<lef<<" "<<rig<<" "<<nxtlef<<" "<<nxtrig<<endl;
        if(rig>=n-1) return cnt;
        if(nxtrig>rig){
            lef=nxtlef;
            rig= nxtrig;
            //cout<<lef<<" "<<rig<<endl;
            nxtrig=-1;
            nxtlef=-1;
            cnt++; // doubt try removing it..
        }
        
        if(rig<n-1) return -1;
        return cnt;
        
    }