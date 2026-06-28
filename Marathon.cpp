#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[4];
    for (int i = 0; i < t; i++)
    {
        int count=0;
        for(int j=0; j<4; j++){
            cin>> a[j];
            if(a[0]<a[j]){
                count++;
            }
        }
        cout<< count << endl;
    }
    return 0;
}
