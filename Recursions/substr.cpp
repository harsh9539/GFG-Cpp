#include <bits/stdc++.h>
using namespace std;


int main()
{
  string s;
  cin >> s;
  for(int i = 0;i<s.length();i++){
    for(int j = i;j<s.length();j++){
      for(int k = i;k<=j;k++){
        cout << s[k];
      }
      cout << endl;
    }
  }
  return 0;
}