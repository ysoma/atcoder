#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, r, n, mul;
    long long int max = 1e9;
    cin >> a >> r >> n;

    for(int i = 1; i <= n; i++) {
        if(i != 1)
            mul = a * r;
        else
            mul = a;
        if(max < mul) {
            cout << "large" << endl;
            return 0;
        }
        a = mul;
    }
    cout << a << endl;
    return 0;
}