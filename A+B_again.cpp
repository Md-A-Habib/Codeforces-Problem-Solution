#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int sum = 0;
        
         while (x > 0)
        {
            sum = sum + (x % 10);
            x /= 10;
        }
        cout << sum << endl;
    }
}