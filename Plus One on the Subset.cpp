// https://codeforces.com/contest/1624/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){

    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        cin >> A[i];

        sort(A, A + n);

        cout << A[n - 1] - A[0] << nl;
    }

}


int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}

