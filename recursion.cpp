#include <iostream>
using namespace std;
long a[1000007],g[1000007],result=0,gresult=0;
int frecursion(long n){
       if(n==3) return 0;
        frecursion(--n);
            g[n-2]=g[n-3]+a[n-3];
        a[n]=a[n-1]+a[n-2]+2*g[n-2];
        cout<<"  Ans "<<a[n]<<"\t";
        //cout<<a[n-1]<<"\t"<<a[n-2]<<"\t"<<g[n-2]<<"\t"<<grecursion(n-2)<<endl;
        return a[n];
}
int main()
{
    a[0]=1,a[1]=1,a[2]=2,g[0]=0,g[1]=1,g[2]=2;
    cout << "Hello World" << endl;
    int n=5,ans;
    if(n<=3)
        ans=a[n-1]+a[n-2]+2*g[n-2];
    else
        ans=frecursion(n+1);//grecursion(3+1)
    cout<<"Ans is " <<ans<<endl;
   return 0;
}