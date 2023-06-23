///Queen's Attack II


int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    int ans[8];
    ans[0]=n-r_q;   //t
    ans[1]=r_q-1;   //d
    ans[2]=c_q-1;   //l
    ans[3]=n-c_q;   //r
    ans[4]=min(ans[0],ans[2]);  //top left
    ans[5]=min(ans[0],ans[3]);  //top right
    ans[6]=min(ans[1],ans[2]);  //down left
    ans[7]=min(ans[1],ans[3]);  //down right
   
   
    if(n==1) return 0;
    else if (k==0) {
    return ans[0]+ans[1]+ans[2]+ans[3]+ans[4]+ans[5]+ans[6]+ans[7];
    }
    else{
        
     for(int i=0;i<k;i++){
           int row=obstacles[i][0];
           int column=obstacles[i][1];
           int rowpath=abs(row-r_q)-1;
           int columnpath=abs(column-c_q)-1;
           if(r_q==row){//same row
                 if(c_q>column) 
                 ans[2]=min(ans[2],columnpath);//l
                 else
                  ans[3]=min(ans[3],columnpath);//r
           }
           else if(c_q==column){//same column 
                 if(r_q>row) 
                    ans[1]=min(ans[1],rowpath);//d
                 else
                    ans[0]=min(ans[0],rowpath);//t
           }
           else{
               if (rowpath==columnpath) {
               if(c_q>column && r_q<row)
                 ans[4]=min(ans[4],columnpath);//top left
                else if(r_q<row && c_q<column)
                  ans[5]=min(ans[5],columnpath);//top right
                else if(r_q>row && c_q<column)
                    ans[7]=min(ans[7],columnpath);//down right
                 else 
                    ans[6]=min(ans[6],rowpath);//down left
               }
               
                  
           }
         
     }
  
     for(int x:ans) cout<<x<<endl;
     return ans[0]+ans[1]+ans[2]+ans[3]+ans[4]+ans[5]+ans[6]+ans[7];   
    }
}