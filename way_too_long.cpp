#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>> t;
  cin.ignore();
  string s;

  for (int i=0; i<t; i++){

  getline(cin, s);

  int u=0, l=0;

  for (char c:s){
    if (isupper(c)){
      u++;
    }
    else if(islower(c)){
      l++;
    }
  }
  int n=(u+l)-2;
  int LL=s.size();

  if((u+l)<=10){
    cout << s << endl;
  }else{

  cout << s[0] << n  << s[LL-1] << endl;
  }
}
}