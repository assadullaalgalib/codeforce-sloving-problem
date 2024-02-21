#include<bits/stdc++.h>
using namespace std;
/// Type Section


/// Define Section
#define nl "\n"
#define FST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int Galib(){
  int n;
  cin >> n;

    string a;
    cin >> a;
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        }
    }


    cout << count << endl;

}

int main(){
     FST_IO
    /// Start point
    Galib();

    return 0;
}
