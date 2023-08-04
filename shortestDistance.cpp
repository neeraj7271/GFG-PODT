// User function Template for C++

class Solution {
    
  private:
  bool check(int x, int y, vector<vector<int> > &A, vector<vector<bool> > &vis, int N, int M) {
      
      if(x >= 0 && x < N && y >= 0 && y < M && A[x][y] == 1 && vis[x][y] == false) {
          return true;
      }
      else {
          return false;
      }
  }
  
  private:
  vector<pair<int,int> > movement = {
      {-1, 0}, // up
      {0, 1}, // right
      {1, 0}, // down
      {0, -1}, // left
  };
    
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        
        // visited array
        vector<vector<bool> > vis(N, vector<bool>(M, false));
        queue<pair<int, pair<int, int> > > q;
        q.push({0, {0, 0}});
        
        while(!q.empty()) {
            
            pair<int, pair<int, int> > temp = q.front();
            int dist = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;
            
            
            if(row == X && col == Y) {
                return dist;
            }
            
            q.pop();
            
            for(int i=0; i<4; i++) {
                
                int newRow = movement[i].first+row;
                int newCol = movement[i].second + col;
                
                if(check(newRow, newCol, A, vis, N, M)) {
                    vis[newRow][newCol] = 1;
                    q.push({dist + 1, {newRow, newCol}});
                }
            }
            
        }
        
        return -1;
        
    }
};