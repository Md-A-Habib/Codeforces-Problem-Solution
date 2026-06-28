#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>> t;

  string  n, a, b, c, d, e;
  a ="Tetrahedron";
  b="Cube";
  c="Octahedron";
  d="Dodecahedron";
  e="Icosahedron";
  
  int count =0;

  for(int i=0; i<t+1; i++){
    getline(cin, n);

    if(n==a){
      count= count +4;
    }
    if (n==b){
      count = count +6;
    }
    if (n==c){
      count =count+8;
    }
    if (n==d){
      count =count +12;
    }
    if (n==e){
      count =count +20;
    }
  }
  cout << count << endl;

}