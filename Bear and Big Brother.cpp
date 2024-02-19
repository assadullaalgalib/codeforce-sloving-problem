//https://codeforces.com/contest/791/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define ll long long int
#define INF 1e18
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib()
{
int a,b;
cin >> a >> b ;

int i = 1;

while(a <= b)
{
   a = 3*a*i;
   b = 2*b*i;
    i++;
}
 cout<< i-1 <<nl;
}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}
