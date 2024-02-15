// https://codeforces.com/contest/1092/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{
     ll test;
    cin>> test;

    while (test--) {
        ll n, k;
        cin>> n>>k;
        char ch = 96 + k;

        for (int i = 1; i <= n; i++) {
        cout << static_cast<char>('a' + i % k);
        }

        cout <<nl;
    }

}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}


