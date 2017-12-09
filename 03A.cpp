#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int DX[4] = {0, -1, 0, 1};
const int DY[4] = {1, 0, -1, 0};

int main() {
    int x = 0, y = 0, dir = 0, k = 1, n;
    cin >> n;
    n--;
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while(1) {
        for(int i = 0; i < k; i++) {
            if(n == 0) {
                cout << abs(x) + abs(y) << endl;
                return 0;
            }
            x += DX[dir];
            y += DY[dir];
            n--;
        }
        dir = dir + 1 & 3;
        if(dir % 2 == 0) {
            k++;
        }
    }
    return 0;
}
