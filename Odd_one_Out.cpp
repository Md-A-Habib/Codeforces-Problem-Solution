#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   int a, b, c;
    for (int i=0; i<n; i++){
        cin >> a>> b>> c;
            if(a==b){
                cout << c<< endl;
            }
            else if(a==c){
                cout << b  << endl;
            }
            else if(b==c ){
                cout<< a << endl;
            }
    }
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int b[3];

//     for (int i = 0; i < n; i++) {
        
//         for (int j = 0; j < 3; j++) {
//             cin >> b[j];
//         }
//         if (b[0] == b[1])
//             cout << b[2] << endl;
//         else if (b[0] == b[2])
//             cout << b[1] << endl;
//         else
//             cout << b[0] << endl;
//     }

//     return 0;
// }

