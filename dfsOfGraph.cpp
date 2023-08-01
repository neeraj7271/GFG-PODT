class Solution {
  public:
    vector<int> ans;
    void solve(int source, vector<int> &visited, vector<int> adj[]) {
        
        visited[source] = 1;
        ans.push_back(source);
        for(auto i: adj[source]) {
            
            if(!visited[i]) {
                solve(i, visited, adj);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
      
       vector<int> visited(V,0);
       solve(0, visited, adj);
       
       return ans;
    }
};