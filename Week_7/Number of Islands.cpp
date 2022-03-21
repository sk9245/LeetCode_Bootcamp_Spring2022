// https://leetcode.com/problems/number-of-islands/

class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col){
        int r = grid.size();
        int c = grid[0].size();
        
        grid[row][col] = '0';
        
        if(row - 1 >= 0 && grid[row-1][col] == '1') dfs(grid, row - 1, col);
        if(row + 1 < r && grid[row + 1][col] == '1') dfs(grid, row + 1, col);
        if(col - 1 >= 0 && grid[row][col - 1] == '1') dfs(grid, row, col - 1);
        if(col + 1 < c && grid[row][col + 1] == '1') dfs(grid, row, col+ 1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        if (row == 0)
            return 0;
        
        int count = 0;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        
        return count;
    }
};
