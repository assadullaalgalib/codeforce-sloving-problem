//https://codeforces.com/contest/110/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{   ll n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        int a = n % 10;
        if (a == 4 || a == 7) {
        cnt++;
        }
        n/=10;
        }

    if (cnt == 0) {
        cout << "NO" <<nl;
    }
    else {
    while (cnt> 0) {
    int b = cnt % 10;
    if (b!= 4 && b!= 7)
    {
    cout << "NO" << nl;
     return;

    }
    cnt/= 10;

    }
    cout << "YES" <<nl;
    }
}
int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
