#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, a, b, c;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    cin >> a >> b;
    if (a % b == 0)
    {
      cout << "0" << endl;
    }
    else
    {
      c = b - (a % b);
      cout << c << endl;
    }
  }
}