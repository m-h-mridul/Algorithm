
// find next work on alphabetize dictonary order 


string biggerIsGreater(string w) {
     int i,next,small;
   //cout<<"Ans is "<<"ecfdgi\n";
   for(i=w.size()-1;i>=0;i--){
       if(w[i]>w[i-1]){
       // cout<<ch[i]<<" "<<ch[i-1]<<endl;
       next=i;
       small=i-1;
       break;   
       }
}
if(i==0) return "no answer";
else {
for(int j=i+1;j<w.size();j++){
    if(w[j]>w[small] && w[j]<w[next])
     next=j;
}
   swap(w[small],w[next]);
   sort(w.begin()+i,w.end());
return w;
}