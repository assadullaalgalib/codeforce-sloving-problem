//https://codeforces.com/problemset/problem/785/A
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
#define maxIdx(v)      max_element(all(v)) - v.begin()
#define minIdx(v)      min_element(all(v)) - v.begin()
#define maxEle(v)      *max_element(all(v))
#define minEle(v)      *min_element(all(v))
// ----------------------------------------------------------------------------

int main() {

    vector<int> f = {4, 6, 8, 12, 20};

    int n;
    cin >> n;

    int t = 0;
    string p;
    for (int i = 0; i < n; i++) {
        cin >> p;

        if (p == "Tetrahedron") {
             t += f[0];
        } else if (p == "Cube") {
            t += f[1];
        } else if (p == "Octahedron") {
             t += f[2];
        } else if (p == "Dodecahedron") {
             t += f[3];
        } else if (p == "Icosahedron") {
             t += f[4];
        }
    }

    cout << t << endl;

    return 0;
}
