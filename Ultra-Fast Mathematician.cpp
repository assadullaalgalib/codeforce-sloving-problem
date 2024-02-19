//https://codeforces.com/contest/61/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{   string n1, n2;
    cin >> n1 >> n2;

    for ( ll  i = 0; i < n1.length(); i++)
        {
        if (n1[i] == n2[i]) {
        cout <<'0';
        }
         else {
        cout <<'1';
        }
    }

    cout << nl;
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
