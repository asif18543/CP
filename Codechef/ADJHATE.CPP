#include <bits/stdc++.h>
using namespace std;
void solution() {
 int n;
 cin >> n;
 int arrAns[n];
 for (int i = 0; i < n; i++) {
  cin >> arrAns[i];
 }
 int o = 0, e = 0;
 for (int i = 0; i < n; i++) {
  if (arrAns[i] % 2 == 0) {
   e++;
  } else {
   o++;
  }
 }
 if (e == 0 and o > 0) {
  cout << -1 << endl;
  return;
 }
 if (o == 0 and e > 0) {
  cout << -1 << endl;
  return;
 }
 if (o > 0 and e > 0) {
  for (int i = 0; i < n; i++) {
   if (arrAns[i] % 2 != 0) {
    cout << arrAns[i] << " ";
   }
  }
  for (int i = 0; i < n; i++) {
   if (arrAns[i] % 2 == 0) {
    cout << arrAns[i] << " ";
   }
  }
  cout << endl;
 }
}
int main() 
{
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      solution();
      
  }
  return 0;
}
