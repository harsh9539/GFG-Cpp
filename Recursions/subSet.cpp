#include <bits/stdc++.h>
using namespace std;

void helper(int idx, int arr[], vector<int> &ds, set<vector<int>> &ans, int n)
{
  if (idx == n)
  {
    ans.insert(ds);
    return;
  }

  ds.push_back(arr[idx]);
  helper(idx + 1, arr, ds, ans, n);
  ds.pop_back();
  helper(idx + 1, arr, ds, ans, n);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  set<vector<int>> s;
  vector<vector<int>> ans;
  vector<int> ds;
  helper(0, arr, ds, s, n);
  // cout << s.size();
  for(auto it:s){
    ans.push_back(it);
  }
  for(auto it:ans){
    cout << "[" ;
    for(auto x:it){
      cout << x << "";
    }
    cout << "]" << endl;
  }

  return 0;
}