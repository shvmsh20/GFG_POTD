int findPar(int a, int par[]){
        if(a == par[a])
            return a;
        return par[a] = findPar(par[a], par);
    }
    void union_( int a, int b, int par[], int rank1[]) 
    {
        //code here
        a = findPar(a, par);
        b = findPar(b, par);
        if(rank1[a] > rank1[b]){
            par[b] = a;
        }
        else if(rank1[a] < rank1[b]){
            par[a] = b;
        }
        else{
            par[a] = b;
            rank1[b]++;
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //code here
        return findPar(x, par) == findPar(y, par);
    }