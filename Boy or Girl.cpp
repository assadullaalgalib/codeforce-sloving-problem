//https://codeforces.com/contest/236/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {

   string s;
   cin >> s ;
   set<char> distinct_characters(s.begin(), s.end());
   if (distinct_characters.size()% 2 == 0) {
    cout <<"CHAT WITH HER!" <<nl;
    }
    else {
    cout << "IGNORE HIM!" <<nl;
    }
}



int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
