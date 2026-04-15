#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, c=0;
    cin >> n >> m;

    while (m>n){
        if(m%2 == 0) {
            m= m/2;
        }else{
            m++;
        }
        c++;
    }
    cout << c+(n-m) << endl;
}
