#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int n, m,a, r;
  cin>> n>> m>> a;

  if (n!=m && a!=1){
     r= (n*m)/(a*a);
    if(r==0){
      cout << r+1 << endl;
    }else{
      cout <<r << endl;
    }
  }else if(a==1){
  cout << n*m << endl;
  }else{
    r= (n*m)/(2*a);
    if(r==0){
      cout << r+1 << endl;
    }else{
      cout <<r << endl;
    }
  }
}