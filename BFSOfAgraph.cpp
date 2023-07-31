class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        queue<int> q;
        q.push(0);
        
        vector<int> visited(V,0);
        visited[0] = 1;
        
        while(!q.empty()) {
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);
            
            for(auto i: adj[frontNode]) {
                
                if(!visited[i]) {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
        
        return ans;
    }
};