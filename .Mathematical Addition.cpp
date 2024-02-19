//https://codeforces.com/contest/1584/problem/A
#include<bits/stdc++.h>
using namespace std;

///################## Typedef Section ###################
typedef long long int ll;
typedef double db;

///######################################################
///################## Define Section ####################
#define nl            "\n"
#define pi            acos(-1.0)
#define INF           1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
///######################################################
///################### Main Code ########################
int Galib()
{
    ll test; cin >> test;

    while(test--){
        ll u, v; cin >> u >> v;

        cout << -(u*u) << " " << v*v << nl;
    }

}
int main (){
    Galib();
    return 0;
    }
