#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int n;
    string s[10] = {"pon", "pon", "hon", "bon", "hon",
                    "hon", "pon", "hon", "pon", "hon"};
    cin >> n;

    cout << s[n % 10] << endl;

    return 0;
}