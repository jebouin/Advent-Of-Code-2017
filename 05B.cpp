#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 5555;
int a[N];
int n;

int main() {
    while(cin >> a[n]) {
        n++;
    }
    int pos = 0, ans = 0;
    while(pos < n) {
        int np = pos + a[pos];
        a[pos] += a[pos] >= 3 ? -1 : 1;
        pos = np;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
