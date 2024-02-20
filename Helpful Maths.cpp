//https://codeforces.com/contest/339/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {
    string s;
    cin >> s;

    vector<int> v;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            v.push_back(s[i] - '0');
        }
        //cout << s[i] << nl;
    }

    cout << nl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << "+";
        }
    }
    cout << nl;
}

int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
