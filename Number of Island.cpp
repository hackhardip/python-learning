/*
Given an m x n 2d grid map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.


*/


class Solution {
public:
    int dfs(int i, int j,vector<vector<char>>& grid){
        if(i<0||j<0||i>grid.size()-1||j>grid[0].size()-1||grid[i][j]=='0')
            return 0;
        #base case
        grid[i][j] = '0';
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
        return 1;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int island = 0;
        for(int i=0; i< grid.size();i++){
            for (int j=0; j< grid[0].size();j++){
                if(grid[i][j]=='1'){
                #if it's island increase the count and do the depth first search so we can count connected island as 1
                    island++;
                    dfs(i,j,grid);
                }
            
            }
        }
        return island;
    }
    
};
