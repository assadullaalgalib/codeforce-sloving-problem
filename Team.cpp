//https://codeforces.com/contest/231/problem/A
#include<bits/stdc++.h>

using namespace std;

/// Type Section

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Galib() {
    int a, b, c, n;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if (a + b+c >=2 )
        {
            count++;
        }
}
cout << count << nl;
}

int main() {
    /// Start point
    FST_IO
    Galib();

    return 0;
}
