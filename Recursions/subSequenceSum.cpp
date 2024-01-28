#include <bits/stdc++.h>
using namespace std;

// for printing all the possible answers
void subSequenceSum(int arr[], vector<int> ds, int index, int n, int sum, int target)
{
  if (index == n)
  {
    if (sum == target)
    {
      for (auto x : ds)
        cout << x << " ";
      cout << endl;
    }
    return;
  }
  if (sum > target)
    return;

  ds.push_back(arr[index]);
  subSequenceSum(arr, ds, index + 1, n, sum + arr[index], target);
  ds.pop_back();
  subSequenceSum(arr, ds, index + 1, n, sum, target);
}

// for printing the only and very first anwser
bool firstSubSequenceSum(int arr[], vector<int> ds, int index, int n, int sum, int target)
{
  if (index == n)
  {
    if (sum == target)
    {
      for (auto x : ds)
        cout << x << " ";
      cout << endl;
      return true;
    }
    return false;
  }

  ds.push_back(arr[index]);
  if (firstSubSequenceSum(arr, ds, index + 1, n, sum + arr[index], target))
  {
    return true;
  }
  ds.pop_back();
  if (firstSubSequenceSum(arr, ds, index + 1, n, sum, target))
  {
    return true;
  }

  return false;
}

// now for getting the total count of possible answers
int countSubSequenceSum(int arr[], int index, int n, int sum, int target)
{

  if (n == index)
  {
    if (sum == target)
    {
      return 1;
    }
    return 0;
  }
  int include = countSubSequenceSum(arr, index + 1, n, sum + arr[index], target);
  int exclude = countSubSequenceSum(arr, index + 1, n, sum, target);
  return include + exclude;
}


int main()
{

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int target;
  cin >> target;
  vector<int> ds;
  subSequenceSum(arr, ds, 0, n, 0, target);
  // firstSubSequenceSum(arr, ds, 0, n, 0, target);

  // in this we don't need to carry the vector with us
  cout << "Total Count: " << countSubSequenceSum(arr, 0, n, 0, target);
  return 0;
}