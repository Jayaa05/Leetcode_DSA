class Solution {
public:
   int maxgrid(vector<vector<int>>&grid,int r,int c){
    int maxval=INT_MIN;
    for(int i=r;i<=r+2;i++){
        for(int j=c;j<=c+2;j++){
            maxval=max(maxval,grid[i][j]);
        }
    }
    return maxval;

   }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>arr(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                arr[i][j]=maxgrid(grid,i,j);

            }
       }
       return arr;
    }
};