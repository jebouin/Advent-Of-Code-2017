#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int DX[4] = {0, -1, 0, 1};
const int DY[4] = {1, 0, -1, 0};
const int DX8[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int DY8[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int S = 1000;
int grid[S][S];

int main() {
    int x = S >> 1, y = S >> 1, dir = 0, k = 1, n;
    cin >> n;
    n--;
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    grid[x][y] = 1;
    while(1) {
        for(int i = 0; i < k; i++) {
            x += DX[dir];
            y += DY[dir];
            for(int d = 0; d < 8; d++) {
                grid[x][y] += grid[x + DX8[d]][y + DY8[d]];
            }
            if(grid[x][y] > n) {
                cout << grid[x][y] << endl;
                return 0;
            }
        }
        dir = dir + 1 & 3;
        if(dir % 2 == 0) {
            k++;
        }
    }
    return 0;
}
