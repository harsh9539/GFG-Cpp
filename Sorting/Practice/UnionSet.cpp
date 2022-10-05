#include <bits/stdc++.h>
using namespace std;

void unionSet(int n, int m, int arr1[], int arr2[])
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        s.insert(arr2[j]);
    }
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int main()
{
    int n, m;
    int arr1[50], arr2[50];
    cout << "Enter number of elements in array1" << endl;
    cin >> n;
    cout << "Enter number of elements in array2" << endl;
    cin >> m;
    cout << "Enter elements of array1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements of array2" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    unionSet(n, m, arr1, arr2);
    return 0;
}