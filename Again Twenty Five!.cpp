//https://codeforces.com/contest/630/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{

    ll n;
    cin >> n;
    int res;

    if (n == 0)
    {
        res = 1;
    }
    else if (n == 1)
    {
        res = 5;
    } else if (n >= 2)
    {
        res = 25;
    } else
    {
        res = 0;
    }

    cout <<res << endl;
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
