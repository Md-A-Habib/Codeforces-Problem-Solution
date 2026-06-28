#include <bits/stdc++.h>
using namespace std;


int main (){
    int x, steps=0;
    cin >> x;  
    for (int i=5; i>0; i--){
        steps += x/i;
        x= x%i; 
    }
    cout <<steps << endl; 
}


// Through While Loop


//#include <stdio.h>
 
 
  //  int main (){
  //  int x, steps=0;
  //  scanf ("%d", &x);  
 
  //  int i=5;
  // do{
   //     steps += x/i;
   //     x= x%i; 
   //     i--;
   // }
  //  while (i>0);
  //  printf ("%d\n", steps); 
//return 0;
//}