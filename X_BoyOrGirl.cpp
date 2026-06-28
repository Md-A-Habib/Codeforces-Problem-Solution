#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    int d = 0;
    int sz = strlen(s);

    char s2[100];
    strcpy(s2, s);

    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {

            if (s[i] == s2[j])
            {
                d++;
            }
        }
    }
    cout << sz-d << endl;
    if ((sz-d)%2 == 0 && (sz-d)>0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}