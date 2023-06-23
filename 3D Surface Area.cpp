
//////////heaker rank solution c++ 
////////////////*********3D Surface Area
/*each box has 6 part .every past have value 
if base value is getter then (east/west/north/south) then different will be save
and the other part is top&down value are fix that is 1+1=2; 
retrun that mutiple array how much surface will be look.
*/

int surfaceArea(vector<vector<int>> A) {
    int result=2*A.size()*A[0].size();
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            int value=A[i][j];
            ///top
            if(i-1<0) result+=value;
            else (value>A[i-1][j])?result+=value-A[i-1][j]:result+=0;
            ///down
            if(i+1>=A.size()) result+=value;
            else (value>A[i+1][j])?result+=value-A[i+1][j]:result+=0;
              ///left
            if(j-1<0) result+=value;
            else (value>A[i][j-1])?result+=value-A[i][j-1]:result+=0;
             ///right 
             if(j+1>=A[0].size()) result+=value;
             else (value>A[i][j+1])?result+=(value-A[i][j+1]):result+=0;
        
        }
        
    }
    
   return result;
}