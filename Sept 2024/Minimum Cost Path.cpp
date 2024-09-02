class comp{
    public:
  bool operator()(pair<int,pair<int,int>>&a,pair<int,pair<int,int>>&b){
      if(a.first>b.first)return true;
      return false;
      
  }  
};
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
    //right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        //Maintaining visted array
        vector<vector<int>>vis(n,vector<int>(n,0));
        //To find the element where we can reach with least points.
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,comp>pq;
        pq.push({grid[0][0],{0,0}});
        vis[0][0]=1;
        //For checking all the neighbours of given element.
        int delx[]= {1,0,-1,0};
        int dely[]= {0,1,0,-1};
        int x,y,w;
        while(!pq.empty()){
            w=pq.top().first;
            x=pq.top().second.first;
            y=pq.top().second.second;
            //If bottom right element found break
            if(x==n-1&&y==n-1)break;
            pq.pop();
            for(int j=0;j<4;j++)
            {
                int tx=x+delx[j];
                int ty=y+dely[j];
                if(tx>=0&&tx<n&&ty>=0&&ty<n&&vis[tx][ty]==0)
                {
                    //If element is not yet visited insert it in pq.
                    pq.push({w+grid[tx][ty],{tx,ty}});
                    vis[tx][ty]=1;
                }
            }
        }
        return w;
    }
};