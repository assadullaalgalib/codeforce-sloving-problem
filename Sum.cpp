//https://codeforces.com/contest/1742/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int Galib() {

    int n;
    cin >> n;

    for (int i = 0; i < n ;i++) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b + c || b == a + c || c == a + b)
{
           cout << "YES"<< nl;
 }
        else
{
        cout << "NO" << nl;
}
}


}


int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
