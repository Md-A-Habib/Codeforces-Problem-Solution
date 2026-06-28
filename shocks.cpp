#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, f, nf;
    cin >> a >> b;
    if (a > b && b != 0)
    {
        f = b;
        nf = (a - b) / 2;
    }
    else if (a < b && a != 0)
    {
        f = a;
        nf = (b - a) / 2;
    }
    else if (b == 0)
    {
        f = b;
        nf = a / 2;
    }
    else if (a == 0)
    {
        f = a;
        nf = b / 2;
    }
    else if(a==b){
        f=a;
        nf=0;
    }

    cout << f << " " << nf << endl;
    return 0;
}