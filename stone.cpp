#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cr = 0, cg = 0, cb = 0;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'R')
            cr++;
        else if (a[i] == 'G')
            cg++;
        else if (a[i] == 'B')
            cb++;
    }
    cout << cr << endl;
}