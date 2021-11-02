#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

typedef unsigned long ul;
typedef unsigned long long ull;
typedef pair<ul, ul> P;

int main() {
    int N;
    int t[4];
    int exist = 99999;

    cin >> N;
    rep(i, N) cin >> t[i];

    for(int bit = 0; bit < (1 << N); bit++) {
        int a_count = 0, b_count = 0;
        for(int i = 0; i < N; i++){
            if(bit&(1<<i)){
                b_count += t[i];
            }else{
                a_count += t[i];
            }
        }
        exist = min(exist, max(a_count, b_count));
    }

    cout << exist << endl;

    return 0;
}