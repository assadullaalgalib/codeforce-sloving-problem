//https://codeforces.com/contest/510/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {

    int a,b;
    cin>>a>>b;

    for(int i=1;i<=a;i++) {
    for(int j=1;j<=b;j++) {
    if(i%2==1) {
    cout<<"#";
     }
      else{
    if (i%4==0&&j==1){
     cout << "#";
   }
   else if (i%4!=0&&j==b) {
   cout <<"#";
   }else {
   cout<<".";
   }
   }
   }
   cout<<nl;
   }


}



int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
