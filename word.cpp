#include <bits/stdc++.h>
using namespace std;
int main(){
 
  string s;
  getline(cin, s);

  int u=0, l=0;

  for (char c:s){
    if(isupper(c)){
      u++;
    }
    else if(islower(c)){
      l++;
    }
  }

  if(u>l){
    transform(s.begin(), s.end(), s.begin(),::toupper);
    cout << s << endl;
  }
  else if(l>u){
    transform(s.begin(), s.end(), s.begin(),::tolower);
    cout << s << endl;
  }else{
    transform(s.begin(), s.end(), s.begin(),::tolower);
    cout << s << endl;
  }
}
