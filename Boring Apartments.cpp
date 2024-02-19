//https://codeforces.com/contest/1433/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{
    int a;
    cin >> a;
    while(a--){
        string s ;
    cin >> s;
    ll z=s.size();
   ll n = s[0]-'0';
   ll x= (n-1)*10 +((z*(z+1))/2);
 cout << x <<nl;
    }
}


int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
