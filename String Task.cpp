//https://codeforces.com/contest/118/problem/A
#include<bits/stdc++.h>

using namespace std;

#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Galib() {

    string input;
    cin >> input;

    string res;
    for (int i = 0; i < input.size(); i++) {
        char ch = input[i];
        if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u' && tolower(ch) != 'y') {
            res += '.';
            res += tolower(ch);
        }
    }

    cout << res << endl;
}

int main() {
    FST_IO
    Galib();

    return 0;
}
