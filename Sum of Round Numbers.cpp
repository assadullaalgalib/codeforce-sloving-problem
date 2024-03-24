#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int, vector<int>>> testCases;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s;
        int mul = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                s.push_back(digit * mul);
            }
            n /= 10;
            mul *= 10;
        }

        testCases.push_back({s.size(), s});
    }

    for (const auto& testCase : testCases) {
        cout << testCase.first << endl;
        for (int i = 0; i < testCase.second.size(); i++) {
            cout << testCase.second[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
