//https://codeforces.com/contest/69/problem/A

#include<bits/stdc++.h>

using namespace std;

/// Type SectionN

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Galib() {

    int n;
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        // Sum up the coordinates of the force vectors
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    // Check if the sum is equal to the zero vector
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
     cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


}


int main() {
    /// Start point
    FST_IO
    Galib();

    return 0;
}

