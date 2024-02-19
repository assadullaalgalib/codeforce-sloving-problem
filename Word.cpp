//https://codeforces.com/contest/59/problem/A
#include<bits/stdc++.h>
using namespace std;

/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {

   string word;
   cin >> word;

   int upperCount = 0;
   int lowerCount = 0;

   for (char ch : word) {
   if (isupper(ch)) {
   upperCount++;
   } else {
   lowerCount++;
   }
   }


  if (upperCount > lowerCount) {
   for (char &ch : word) {
    ch = toupper(ch);
    }
    } else {
    for (char &ch : word) {
     ch = tolower(ch);
    }
    }
    cout << word << endl;

}

int main() {
    FST_IO
    /// Start point
    Galib();

    return 0;
}
