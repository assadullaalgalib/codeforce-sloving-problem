//https://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;
/// Type Section


/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int Galib(){

    int a[5][5];
    for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
    cin >> a[i][j];
    }
    }
    int row, col;
    for (int i = 0; i < 5; ++i)
    {
    for (int j = 0; j < 5; ++j)
    {
    if (a[i][j] == 1)
    {
    row = i;
    col = j;
    }
    }
    }
    int b  = abs(row - 2) + abs(col - 2);


    cout << b << nl;
}

int main(){
     FST_IO
    /// Start point
    Galib();

    return 0;
}
