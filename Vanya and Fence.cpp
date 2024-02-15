//https://codeforces.com/contest/677/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{
    ll n, a;
    cin >> n >> a;

    ll w = 0;
    for (int i = 0; i < n; ++i) {
        ll h;
        cin >> h;
        if (h > a) {
        w +=2;
        }
        else {
            w+=1;
        }
    }
    cout << w << endl;
}


int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
