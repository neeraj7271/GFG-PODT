class Solution 
{
    public:
    
    bool isSafe(int grid[N][N], int row, int col, int val) {
        
        for(int i = 0; i<N; i++) {
            
            // case: 1 row me check kro
            if(grid[row][i] == val) {
                return false;
            }
            
            // case2: col me check kro
            if(grid[i][col] == val) {
                return false;
            }
            
            // case3: 3*3 matrix me check kro
            if( grid[3* (row/3)+ i/3][3 *(col/3) + i% 3]  == val) {
                return false;
            }
        }
        
        return true;
        
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        for(int row = 0; row < N; row ++) {
            
            for(int col = 0; col < N; col++) {
                
                // check empty cell
                if(grid[row][col] == 0) {
                    
                    for(int val = 1; val <= 9 ; val++) {
                        
                        if(isSafe(grid, row, col, val)) {
                            grid[row][col] = val;
                            
                            bool isPuttingValPossible = SolveSudoku(grid);
                            
                            if(isPuttingValPossible) 
                                return true;
                            
                            else {
                                // backtrack
                                grid[row][col] = 0;
                            }
                           
                        }
                    }
                    return false;
                }
                
            }
        }
        
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
       SolveSudoku(grid);
       
       // printing the sudoku
      for(int row = 0; row<N; row++) {
           
          for(int col = 0; col < N; col ++) {
               
              cout << grid[row][col] << " ";
          }
      }
    }
};