//https://codeforces.com/contest/1669/problem/A
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

        if (a >= 1900) {
           cout << "Division 1\n";
        } else if (a >= 1600) {
            cout << "Division 2\n";
        } else if (a >= 1400) {
           cout << "Division 3\n";
        } else {
           cout << "Division 4\n";
        }
    }


}



int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
