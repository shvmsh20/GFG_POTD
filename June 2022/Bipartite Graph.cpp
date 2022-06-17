bool DFSisBipartite(int node, vector<int> adj[], vector<bool> &visited, vector<int> &color)

    {

        visited[node] = true;

        

        for (auto nbr : adj[node])

        {

            if (!visited[nbr])

            {

                color[nbr] = !color[node];      //child ka color parent se alag hoga 

                if (!DFSisBipartite(nbr, adj, visited, color))

                    return false;

            }

            else

            {

                if (node != nbr && color[node] == color[nbr])       //agar baap aur bete ka color same he matlab Graph is not Bipartite 

                    return false;

            }

        }

        return true;

    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	     vector<bool> visited(V , 0) ;   

   vector<int> color(V , 0) ;      //ye node ka color store karega 

   

   for(int i=0 ; i<V ; i++)

   {

       if( !visited[i] )

       {

           if( !DFSisBipartite( i , adj , visited , color) ) 

               return false ; 

       }

   }

   return true ; 
	}