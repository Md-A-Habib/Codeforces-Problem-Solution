#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>> n;
   int a[]={4,7, 44, 47,74, 77, 444, 447, 474, 477, 777,744,  747, 774 };

   for(int i=0; i<14; i++){
    if(n%a[i]==0){
        cout<< "YES" << endl;
        return 0;
    }
   }
   cout << "NO" << endl;
}
