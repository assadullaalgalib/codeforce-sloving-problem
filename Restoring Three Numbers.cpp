//https://codeforces.com/contest/1154/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {
{
    long long  Ar[4];
    for (long long i = 0; i < 4; i++)
    cin >> Ar[i];

    sort(Ar, Ar + 4);

    cout << Ar[3] - Ar[0] << " " << Ar[3] - Ar[1] << " " << Ar[3] - Ar[2] << nl;
}
}

int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
