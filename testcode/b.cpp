#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void) {
    int n, m, q;
    int a, b, c;
    int cnt = 0;
    cin >> n >> m >> q;

    int score[110000];
    int haiten[60];
    bool solved[60][110000];
    int v[110000];

    rep(i, 60) { haiten[i] = n; }
    rep(i, 110000) { score[i] = 0; }
    rep(i, 60) rep(j, 110000) solved[i][j] = false;

    for(int j = 0; j < q; j++) {
        b = c = 0;
        cin >> a;
        if(a == 1) {
            cin >> b;
            v[cnt] = score[b];
            cnt++;
        }
        if(a == 2) {
            cin >> b >> c;
            solved[b][c] = true;
            haiten[c]--;

            score[b] += haiten[c];

            for(int i = 1; i <= n; i++) {
                if(solved[i][c] == true && i != b)
                    score[i]--;
            }
        }
    }
    rep(i, cnt) { cout << v[i] << endl; }

    return 0;
}
