The Bomberman Game

vector<string> bomberMan(int n, vector<string> grid) {
   int row =grid.size();
   int column=grid[0].size();
   vector<string> ans=grid;
     for(int x=0;x<row;x++){
         for(int j=0;j<column;j++){ 
                ans[x][j]='O';
            }
        }
    //if(n==1){return grid;}
     if((n-1)%2==1){
       return ans;     
    }
    else{
        for(int x=0;x<row;x++){
         for(int j=0;j<column;j++){ 
            if(grid[x][j]=='O'){
                if(x+1<row && grid[x+1][j]!='O')
                 ans[x+1][j]='.';
                if(x-1>=0 && grid[x-1][j]!='O')
                   ans[x-1][j]='.';
                if(j+1<column && grid[x][j+1]!='O')
                 ans[x][j+1]='.';
                if(j-1>=0 && grid[x][j-1]!='O')
                   ans[x][j-1]='.';
                ans[x][j]='.';
            }
        }     
     }
     return ans;
    }
}