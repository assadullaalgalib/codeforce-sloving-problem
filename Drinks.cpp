// https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += v[i];
    }

    double fraction = static_cast<double>(total) / n;

    cout << fraction << endl;

    return 0;
}
