//https://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
using namespace std;
/// Type Section


/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int Galib(){

   string string1, string2;
    cin >> string1 >> string2;

    for (char &c : string1) {
        c = tolower(c);
    }

    for (char &c : string2) {
        c = tolower(c);
    }

    if (string1 > string2)
    {
        cout << "1" << nl;

    } else if (string1 < string2) {
        cout << "-1" << nl;

    } else {
        cout << "0" << nl;

    }
}



int main(){
     FST_IO
    /// Start point
    Galib();

    return 0;
}
