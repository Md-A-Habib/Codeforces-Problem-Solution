 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>> n;
    int a[n], i=0;

    while(i<n){
        cin>> a[i];
        i++;
    }
    int mx=a[0];
    for (int i=1; i<n; i++){
        if (a[i]>mx){
            mx=a[i];
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        count = count + (mx-a[i]);
    }
    cout << count << endl;
   
}