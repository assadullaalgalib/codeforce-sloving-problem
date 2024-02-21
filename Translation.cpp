//https://codeforces.com/contest/41/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{

   string s, t;
   cin >> s >> t;
    reverse(s.begin(), s.end());
    if (t == s) {
        cout << "YES" << nl;
    } else {
       cout << "NO" <<nl;
    }

}




int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}

