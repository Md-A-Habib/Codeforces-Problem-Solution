#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[200];
    cin >> s;
 
    int l = strlen(s);
 
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 0; j < l - 2; j++)
        {
            if (s[j] > s[j + 2])
            {
                char t = s[j];
                s[j] = s[j + 2];
                s[j + 2] = t;
            }
        }
    }
    cout << s << endl;
}
