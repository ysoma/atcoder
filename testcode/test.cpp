#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 部分和問題 bit全探索
int main() {
    int n;
    int a[25];
    int K;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> K;

    //全探索
    bool exist = false;
    for(int bit = 0; bit < (1 << n); bit++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(bit & (1 << i)) {
                sum += a[i];
            }
        }

        if(sum == K)
            exist = true;
    }

    if(exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}