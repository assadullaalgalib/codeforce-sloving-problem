//https://codeforces.com/contest/96/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{   string s;
    cin >> s;

    ll cnt = 1;
    for (ll i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        cnt++;
        else cnt = 1;
        if(cnt == 7)
        break;
    }

    if(cnt == 7)
    {
        cout << "YES" << nl;
    }
    else {
        cout << "NO" << nl;
    }
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
