#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        int a = s[i] - '0';
        int b = s[(i + s.size() / 2) % s.size()] - '0';
        ans += (a == b ? a : 0);
    }
    cout << ans << endl;
    return 0;
}
