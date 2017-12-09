#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string line;
    int ans = 0;
    while(getline(cin, line)) {
        stringstream ss(line);
        int n, maxi = 0, mini = 1e9;
        while(ss >> n) {
            maxi = max(maxi, n);
            mini = min(mini, n);
        }
        ans += maxi - mini;
    }
    cout << ans << endl;
    return 0;
}
