#include <bits/stdc++.h>
using namespace std;
class Hash
{
    int bucket;
    list<int> *table;
    public:
    Hash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    void displayHash(){
        for (int i = 0; i < bucket; i++)
        {
            cout << i;
            for(auto x:table[i]){
                cout << " --> " << x;
            }
            cout << endl;
        }
        
    }
};
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Hash h(10);
    for (int i = 0; i < n; i++)
    {
        h.insert(arr[i]);
    }
    h.displayHash();
    
    
    return 0;
}