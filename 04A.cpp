#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string line, word;
    int ans = 0;
    while(getline(cin, line)) {
        stringstream ss(line);
        set<string> st;
        bool ok = true;
        while(ss >> word) {
            if(st.find(word) != st.end()) {
                ok = false;
            }
            st.insert(word);
        }
        ans += ok;
    }
    cout << ans << endl;
    return 0;
}
