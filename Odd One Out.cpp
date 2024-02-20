//https://codeforces.com/contest/1915/problem/A
#include<bits/stdc++.h>

using namespace std;
/// Type Section

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int Galib(){

    int a,b,c,n;
    cin >> n ;

      for (int i = 0; i < n; i++) {

      cin >> a >> b >> c;
      if(a==b){
        cout << c <<nl;
      }
        else if(a==c)
        {
            cout << b <<nl;

        }
         else if (b==c)
        {
            cout << a <<nl;

        }
      }


      }


int main(){
    /// Start point
    FST_IO
    Galib();

    return 0;
}
