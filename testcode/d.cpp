#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c[5][210];

    // input
    cin >> n;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4 * n + 1; j++) {
            cin >> c[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < 5; j++) {
            for(int k = i * 4; k < i * 4 + 4; k++) {
                if(c[j][k] == '#')
                    cnt++;
            }
        }
        //cout << "cnt = " << cnt << endl;
        if(cnt == 7)
            cout << '7';
        if(cnt == 8)
            cout << '1';
        if(cnt == 9)
            cout << '4';
        if(cnt == 13)
            cout << ('8');
        if(cnt == 11){
            if(c[1][i*4+1] == '#')
                cout << ('5');
            else if(c[3][i*4+1] == '#')
                cout << ('2');
            else
                cout << ('3');
        }
        if(cnt == 12){
            if(c[3][i*4+1] == '.')
                cout << ('9');
            else if(c[1][i*4+3] == '.')
                cout << ('6');
            else
                cout << '0';
        }
    }
    cout << endl;
    return 0;
}