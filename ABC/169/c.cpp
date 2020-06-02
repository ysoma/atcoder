#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

typedef unsigned long ul;
typedef unsigned long long ull;
typedef pair<ul, ul> P;

int main() {
    int64_t a;
    double b;
    cin >> a >> b;

    int64_t b2 = (int64_t)llround(b * 100.0);
    cout << a * b2 / 100 << endl;

    return 0;
}