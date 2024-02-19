//https://codeforces.com/contest/977/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{
    int a,n;
    cin >> a >> n;
    for (int i = 0; i < n; i++)
        {
        if (a % 10 == 0)
        {
         a/= 10;
        }
        else
        {
        --a;
        }
    }

   cout << a << nl;

}
int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
