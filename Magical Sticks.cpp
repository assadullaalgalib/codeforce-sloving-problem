//https://codeforces.com/contest/1371/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {
int n;
cin >> n;

    for (int i = 0; i < n; i++) {
       int a;
      cin >> a;

      cout << (a+1)/2 << nl;
    }

}

int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
