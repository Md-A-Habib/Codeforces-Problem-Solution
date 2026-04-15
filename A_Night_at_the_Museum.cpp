#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int sum=0;
    char cur= 'a';

    for(int i=0; i<s.size(); i++){
        int diff = abs(cur-s[i]);
        sum += min(diff, 26-diff);
        cur = s[i];
    }

    cout << sum << endl;
}
