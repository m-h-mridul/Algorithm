///////////********Climbing the Leaderboard
 ///////////////*****heakerrank solution  c++


vector<int> climbingLeaderboard(vector<int> n, vector<int> player) {
    ///return element 
    vector<int>stack;
    ///remove duplicate item 
    n.erase( unique( n.begin(), n.end() ), n.end() );
    vector<int>ranked;
    ///item add another vector for remove the memory errors
    for(int x:n) {ranked.push_back(x);}
    int i=ranked.size();
    //cout<<" i "<<i<<endl;
   /// cout<<"ranked[i] "<<ranked[i-1]<<endl;
   // if(ranked[i-1]>player[0]){
      //stack.push_back(i+1);
    //};
    int cot=i;
    
    for(int n:player){
          //cout<<"player item "<<n<<endl;
           
        while (i>=0) {
            if(ranked[ranked.size()-1]>n){
               // cout<<"rank first "<<ranked[i]<<" i "<<i<<endl; 
                 stack.push_back(ranked.size()+1);
                 cot=ranked.size();
                 break;
                }
            else if(n==ranked[i]){
               stack.push_back(i+1);
              // cout<<"rank value =="<<ranked[i]<<" i "<<i<<endl; 
               cot=i;
               break;
            }
           else if(n>ranked[i] && n<ranked[i-1]){
               //cout<<"rank value >"<<ranked[i]<<" <"<<ranked[i-1]<<" i "<<i<<endl; 
               stack.push_back(i+1);
               cot=i;
               break;
            }
            else if (n>ranked[0]) {
                //cout<<"i == "<<ranked[0]<<" N "<<n<<" i "<<i<<endl; 
                stack.push_back(1);
                break;
            }
            else {
                i--;
            }
        }
        i=cot;
    }
return stack;
}