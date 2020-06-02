#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int main() {
    int k;
    string s;
    cin >> k;
    cin >> s;

    if(k < s.size()) {
        cout << s.substr(0, k);
        cout << "..." << endl;
    } else {
        cout << s << endl;
    }

    return 0;
}