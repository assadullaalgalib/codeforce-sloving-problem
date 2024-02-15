//https://codeforces.com/contest/546/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib(){
    int k, n, w;
    cin >> k >> n >> w;
    int t = k*w*(w + 1)/2;
    int b = max(0, t-n);

    cout << b<< endl;


}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
