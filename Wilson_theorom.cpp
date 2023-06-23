#include <bits/stdc++.h>
using namespace std;
long fact(const int& p)
{
    if (p <= 1)
        return 1;
    int c=p * fact(p - 1);
    return  c;
}
string isPrime(const int& p)
{
        if (p%2 == 0 && p>2)
        return "not prime";
        if(fact(p-1) % p==p-1)
         return "Prime";
         else  return  "Not Prime"; 
   // return bool(fact(p>>1) % p);
}
 
// Driver code
int main()
{
    cout << isPrime(4);
    return 0;
}
