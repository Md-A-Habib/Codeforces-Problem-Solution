#include <bits/stdc++.h>
using namespace std;
int main (){
  int t, a,b,c;
  cin>> t;

  for (int i=0; i<t; i++){
    cin>> a>> b;
    if (a<b){
      c=b-a;
    }
    else if(a>b){
      c=a-b;
    }else{
      c=a-b;
    }
    cout << c << endl;
  }
}