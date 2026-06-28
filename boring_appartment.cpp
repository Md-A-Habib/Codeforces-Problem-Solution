#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        int fd=x;

        int d = 0, md;
        while (x != 0){
            x /= 10;
            d++; 
        }
        while (fd>=10){
            fd/=10;
        }
       cout << ((fd-1)*10)+(d*(d+1))/2 << endl;
    }
    return 0;
}