#include <bits/stdc++.h>
using namespace std;
class Hash
{
    int *arr;
    int cap, size;

public:
    Hash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key % cap;
    }
    bool insert(int key)
    {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
        {
            i = (i+1)%cap;
        }
        if(arr[i]==key) return false;
        else{
            arr[i] = key;
            size++;
            return true;
        }
    }
    void display(){
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i]<< " ";
        }
        
    }
};
int main()
{
    Hash h(10);
    h.insert(4);
    h.insert(14);
    h.insert(24);
    h.insert(44);
    h.display();
    return 0;
}