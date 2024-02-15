//https://codeforces.com/contest/116/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{   int n;
    cin >> n;

    int c = 0;
    int p = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p = p-a+b;
        c= max(c, p);
    }
    cout << c << endl;
}
int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
