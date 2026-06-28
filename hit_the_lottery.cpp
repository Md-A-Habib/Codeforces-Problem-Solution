#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 100 == 0)
        {
            n = n - 100;
            c = c + 1;
        }
        else if (n % 20 == 0)
        {
            n = n - 20;
            c = c + 1;
        }
        else if (n % 10 == 0)
        {
            n = n - 10;
            c = c + 1;
        }
        else if (n % 5 == 0)
        {
            n = n - 5;
            c = c + 1;
        }
        else if(n%1==0){
            n=n-1;
            c= c+1;
        }
    }
    cout << c << endl;

    return 0;
}