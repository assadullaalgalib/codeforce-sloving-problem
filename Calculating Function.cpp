//https://codeforces.com/contest/486/problem/A
// ------------------------------------------------------------------------------
#include<bits/stdc++.h>
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
// ------------------------------------------------------------------------------
void Galib(){
    ll n;
    cin >> n;

    ll  result;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n / 2 + 1);
    }
    cout << result <<nl;

}

int main()
{
    //FST_IO
    /// Start point
    Galib();

    return 0;
}
