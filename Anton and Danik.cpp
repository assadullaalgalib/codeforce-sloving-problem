//https://codeforces.com/contest/734/problem/A
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
    string a;
    cin >> a;
    int count1= 0;
    int count2=0;
    for (int i = 0; i < n; i++) {
    if (a[i] == 'A') {
        count1++;
        }
        else {
        count2++;
        }
    }

    if (count1 > count2) {
      cout << "Anton" <<nl;
    }
    else if (count1 < count2) {
    cout << "Danik" <<nl;
    }
     else {
      cout << "Friendship" <<nl;
    }

}

int main()
{
    FST_IO
    /// Start point
    Galib();

    return 0;
}

