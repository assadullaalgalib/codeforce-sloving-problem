//https://codeforces.com/contest/1154/problem/A
#include<bits/stdc++.h>
using namespace std;

///############################# Typedef Section #############################

typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;

///############################################################################

///############################# Define Section ###############################
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define READ          freopen("in.txt","r",stdin)
#define WRITE         freopen("out.txt","w",stdout);
#define nl            "\n"
#define pi            acos(-1.0)
#define mem(arr,val)  memset(arr,val,sizeof(arr))
#define pb            push_back
#define mp            make_pair
#define pr            pair<ll,ll>
#define ff            first
#define ss            second
#define mod           32768
#define INF           1e18
///############################################################################

///############################# Input Section ################################

#define si1(x)        scanf("%d",&x)
#define si2(x,y)      scanf("%d %d", &x, &y)
#define si3(x,y,z)    scanf("%d %d %d", &x, &y, &z)

#define sd1(x)        scanf("%lf",&x)
#define sd2(x,y)      scanf("%lf %lf", &x, &y)
#define sd3(x,y,z)    scanf("%lf %lf %lf", &x, &y, &z)

#define sli1(x)       scanf("%lld",&x)
#define sli2(x,y)     scanf("%lld %lld", &x, &y)
#define sli3(x,y,z)   scanf("%lld %lld %lld", &x, &y, &z)

///############################################################################

int BitSetUp(int x, int idx){ return x = x | (1<<idx); }
int BitUnSet(int x, int idx){ return x = x & (~(1<<idx)); }
bool BitCheking(int x, int idx){ return x & (1<<idx); }
bool PowerOfTwo(int x){ return (x && !(x&(x-1))); }

void Galib()
{
    ll n; scanf("%lld", &n);
    string s; cin >> s;

    set<char> st;

    for (ll i = 0; i < s.size(); i++)
    {
        char p = tolower(s[i]);
        st.insert(p);
    }

    if(st.size()==26) cout << "YES" << nl;
    else cout << "NO" << nl;
}

///############################################################################

int main()
{
    // FST_IO
    Galib();

    return 0;
}

///############################### Solution ##W################################
/*
Observation:

*/
