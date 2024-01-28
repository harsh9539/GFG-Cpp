#include <bits/stdc++.h>
using namespace std;

void subSequence(int arr[], vector<int> ds, int index, int n)
{
  if (index == n)
  {
    for (auto it : ds)
      cout << it << " ";
    if(ds.size() == 0) cout << "{}";
    cout << endl;
    return;
  }

  subSequence(arr, ds, index + 1, n);
  ds.push_back(arr[index]);
  subSequence(arr, ds, index + 1, n);
  // ds.pop_back();
}

int main()
{

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  vector<int> ds;
  subSequence(arr,ds,0,n);
  return 0;
}