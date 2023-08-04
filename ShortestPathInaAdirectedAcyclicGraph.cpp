// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
                int k = 1e6 + 10;
        vector<int> dis(N,k);
        int i;
        
        dis[0] = 0;
        
        for(i=0; i<M; i++){
            if(dis[edges[i][1]] > dis[edges[i][0]] + edges[i][2]){
                dis[edges[i][1]] = dis[edges[i][0]] + edges[i][2];
            }
        }
        
        for(i=0; i<N; i++){
            if(dis[i] == k){
                dis[i] = -1;
            }
        }
        
        return dis;
            
    }
};