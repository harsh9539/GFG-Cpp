#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, index, element;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    cin >> index;
    cin >> element;
    int arr2[n];
    int k = 0,h = 0;
    for (int l = 0; l < n; l++)
    {
        if (index != l)
        {
            arr2[k] = arr[h];
            cout << "value of k is : "<<k<<endl;
            cout << "value of ldfsk is : "<<l<<endl;
            k++;
            h++;
        }
        else
        {
            arr2[k] = element;
            cout << "value of k is : "<<k<< endl;
            cout << "value of ldskj is : "<<l<<endl;
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}