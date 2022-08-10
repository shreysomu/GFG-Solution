class Solution{
public:

      bool isPossible(bool graph[101][101],int color[],int N,int col,int node){
             for(int k=0;k<N;k++){
                 if(k!=node && graph[node][k]==1 && color[k]==col) 
                       return false;
    }
           return true;
    }

       bool res(bool graph[101][101],int M,int N,int color[],int node){
          if(node==N)
        return true;
        
    // traverse onto diff color recursively
       for(int i=1;i<=M;i++){  
        if(isPossible(graph,color,N,i,node)){
            color[node]=i;
            if(res(graph,M,N,color,node+1))
                return true;
            color[node]=0;
        }
            
    }
    return false;
}

    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int color[n];
      memset(color,0,sizeof color);
          if(res(graph,m,n,color,0)){
              
                return true;
          }
        
          return false;
    }
};
