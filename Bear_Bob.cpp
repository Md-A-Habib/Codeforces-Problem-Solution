#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b;

    for (int i = 1; i < 11; i++)
    {
        a = a*3;
        b= b*2;
        if (a > b)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}