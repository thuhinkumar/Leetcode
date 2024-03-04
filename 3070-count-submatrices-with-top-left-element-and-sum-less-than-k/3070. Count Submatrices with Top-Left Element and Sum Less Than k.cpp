class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int count = 0;
        //stack of next direction to check
        //right
        //down 
        //check if current matrix is greater than sum
        //break
        //if not add and keep going to the end
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(i-1>=0){
                    grid[i][j] = grid[i][j]+grid[i-1][j];
                }
                
                if(j-1>=0){
                    grid[i][j] += grid[i][j-1];
                }
                
                if(j-1>=0 && i-1>=0){
                    grid[i][j] -= grid[i-1][j-1];
                }
                    
                if(grid[i][j] <= k){
                    count++;
                } else{
                    break;
                }
            }
        }
        return count;
    }
};