#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int seated = min(a, m) + min(b, m);

        int remain = (m - min(a, m)) + (m - min(b, m));

        seated += min(c, remain);

        cout << seated << endl;
    }
}