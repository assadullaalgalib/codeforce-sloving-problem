// https://codeforces.com/contest/1030/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){
    ll n, ans = 0;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll p;
        cin >> p;
        ans |= p;
    }

    if (ans) {
        cout << "HARD" << nl;
    } else {
        cout << "EASY" << nl;
    }

}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
