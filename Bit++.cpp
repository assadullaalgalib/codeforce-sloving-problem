//https://codeforces.com/contest/282/problem/A
#include<bits/stdc++.h>

using namespace std;

/// Type Section

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Galib() {


    int n;
    cin >> n;

    int x = 0;
    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;

        if (a[0] == '+' || a[1] == '+') {
            ++x;
        } else {
            --x;
        }
    }

    cout << x << endl;

}



int main() {
    /// Start point
    FST_IO
    Galib();

    return 0;
}
