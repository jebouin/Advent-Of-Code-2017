#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string line;
    int ans = 0;
    while(getline(cin, line)) {
        stringstream ss(line);
        vector<int> v;
        int n;
        while(ss >> n) {
            v.push_back(n);
        }
        for(int i = 0; i < v.size(); i++) {
            for(int j = i + 1; j < v.size(); j++) {
                if(v[i] % v[j] == 0) {
                    ans += v[i] / v[j];
                } else if(v[j] % v[i] == 0) {
                    ans += v[j] / v[i];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
