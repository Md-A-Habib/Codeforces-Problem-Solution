// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     long long int a, b, lda, ldb;
//     cin >> a >> b;
//     vector<int> res;

//     while (a > 0 || b > 0)
//     {
//         lda = a % 10;
//         ldb = b % 10;
//         if (lda + ldb == 2)
//         {
//             res.push_back(0);
//         }
//         else if (lda + ldb == 1 || ldb + lda == 1)
//         {
//             res.push_back(1);
//         }
//         else if (lda + ldb == 0)
//         {
//             res.push_back(0);
//         }

//         a = a / 10;
//         b = b / 10;
//     }
//     reverse(res.begin(), res.end());
//     for (int val : res)
//     {
//         cout << val;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(); 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i]) cout << '0';
        else cout << '1';
    }
    cout << endl;
}