#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string a, b, exist;
    cin >> a;
    cin >> b;

    if(a == b) {
        cout << "same" << endl;
        return 0;
    }

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a == b) {
        cout << "case-insensitive" << endl;
        return 0;
    } else {
        cout << "different" << endl;
    }
}