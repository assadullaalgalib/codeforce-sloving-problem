//https://codeforces.com/problemset/problem/427/A
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
    int n;
    cin >> n;

    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;

        if (c == -1) {
            if (b > 0) {
                b--;
            } else {
                a++;
            }
        } else {
            b  += c ;
        }
    }

    cout << a << endl;

    return 0;
}
