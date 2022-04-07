///another one is find value of maximum subset 
///for this time find the value of subset that can be made of 

int nonDivisibleSubset(int k, vector<int> s) {
    vector <int> result;
    result.assign(k, 0);
    for(int i=0;i<s.size();i++){
        int value=s[i]%k;
        result[value]++;
    }
    int ans=0;
    for(int i=0;i<=k/2;i++){
        if(i==0 || i==k-i){
            if(result[i]>=1)
              ans+=1;
        }
        else{
            ans+=max(result[i],result[k-i]);
        }
    }
return ans;
}