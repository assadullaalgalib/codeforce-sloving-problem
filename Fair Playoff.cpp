//https://codeforces.com/contest/1535/problem/A
// ------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stack>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
// ------------------------------------------------------------------------------
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
// ------------------------------------------------------------------------------
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define READ          freopen("in.txt","r",stdin)
#define WRITE         freopen("out.txt","w",stdout);
#define nl            "\n"
#define PI            acos(-1.0)
#define mem(arr,val)  memset(arr,val,sizeof(arr))
#define pb            push_back
#define mp            make_pair
#define mpl           make_pair<ll,ll>
#define pl            pair<ll,ll>
#define all(x)        x.begin(), x.end()
#define ff            first
#define ss            second
#define mod           10000007
#define INF           2e18
#define EPS           1e-2
#define tt            ll t; cin>>t; while(t--)
#define sp(n)         fixed<<setprecision(n)
// ------------------------------------------------------------------------------

int main() {
    int t;
    cin >> t;
    while (t--) {
   vector<ll> v;
    for(ll i = 0; i < 4; i++){
      ll x; cin >> x;
      v.pb(x);
    }
    if(min(v[0],v[1]) > max(v[2],v[3]) || max(v[0],v[1]) < min(v[2],v[3])){
      cout << "NO" << nl;
    }
    else{
      cout << "YES" << nl;
    }
  }

}
