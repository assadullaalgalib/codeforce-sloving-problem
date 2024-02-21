//https://codeforces.com/contest/71/problem/A
#include<bits/stdc++.h>

using namespace std;
/// Type Section

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int Galib(){

    int n;
    string v;
    cin >> n;

    while (n--) {
            cin >> v;

         if (v.size() > 10) {

            cout << v[0] << v.size()- 2 <<v[v.size()-1] << nl ;
        } else {

            cout << v << nl;
        }
    }


}

int main(){
    /// Start point
    FST_IO
    Galib();

    return 0;
}
