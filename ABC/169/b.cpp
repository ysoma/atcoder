#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
typedef unsigned long ul;
typedef unsigned long long ull;
typedef pair<ul, ul> P;

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    long long int pr = 1;
    long long int m = 1e18;

    rep(i, n) {
        cin >> arr[i];
        if(arr[i] == 0) {
            cout << "0" << endl;
            return 0;
        }
    }

    rep(i, n) {
        if(arr[i] <= m / pr) {
            pr = pr * arr[i];
        } else {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << pr << endl;

    return 0;
}