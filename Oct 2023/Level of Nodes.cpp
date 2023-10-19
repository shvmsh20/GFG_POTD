int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	     queue<int>q;
   vector<int>vis(V,0);
   vis[0]=1;
   q.push(0);
   q.push(-1);
   int l=0;
   while(!q.empty()){
       int a=q.front();
       q.pop();
       if(a==X){
           return l;
       }
       else if(a==-1){
           l++;
           if(!q.empty()){
               q.push(-1);
           }
       }
       else{
           for(auto itr:adj[a]){
               if(vis[itr]==0){
                   vis[itr]=1;
                   q.push(itr);
               }
           }
       }
   }
   return -1;

	}