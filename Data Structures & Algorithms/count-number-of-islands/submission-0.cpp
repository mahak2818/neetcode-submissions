class Solution {
public:
int rows[4]={-1,0,1,0};
int cols[4]={0,-1,0,1};
void bfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis,int n,int m){
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=true;
    while(!q.empty()){
        auto [r,c]=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int nr=rows[k]+r;
            int nc=cols[k]+c;
            if(nr>=0 && nc>=0 && nr<n &&nc<m && !vis[nr][nc] && grid[nr][nc]=='1'){
                q.push({nr,nc});
                vis[nr][nc]=true;
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,grid,vis,n,m);
            }
            }
        }
        return count;
    }
};
