heaker rank problem Absolute Permutation


vector<int> absolutePermutation(int n, int k) {
vector<int>result;
vector<int >result2;
vector<int>result3;
result3.push_back(-1);
for(int i=0;i<n;i++){
    result.push_back(i+1);
    result2.push_back(0);
} 
//cout<<endl;
bool ans=false;
for(int i=0;i<n;i++){
    if((result[i-k]==0 && result[i+k]==0)){
     ans=true;
     break;
    }
    else if(i<k){
     result2[i]=result[i+k];
     result[i+k]=0;    
    }
    else {
        if(result[i-k]!=0){ 
            result2[i]=result[i-k];
            result[i-k]=0;
        }
        else if(i+k>=n){
          cout<<"\n i "<<i<<" j  "<<k<<endl;
          ans=true;
          break;
        }
        else{  
            result2[i]=result[i+k];
            result[i+k]=0;
        }
    }
//cout<<result2[i]<<" i"<<i<<" "; 
} 
cout<<"\n"<<result2.size()<<endl;
//for(int x:result2) cout<<x<<" ";
return ans?result3:result2;
}