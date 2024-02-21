//https://codeforces.com/contest/1/problem/A
#include<bits/stdc++.h>
using namespace std;
/// Type Section


/// Define Section
#define nl "\n"

int Galib(){

  long long a,b,c,d,e;
   cin >> a >> b >> c;
   if(a%c==0)
   {
      d=a/c;
   }
 else
   {
      d=a/c +1 ;
   }
   if(b%c==0)
   {
      e=b/c;
   }
 else
   {
      e=b/c +1 ;
   }
   cout << d*e <<nl;
}

int main(){
    /// Start point
    Galib();

    return 0;
}
