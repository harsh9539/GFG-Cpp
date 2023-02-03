#include <bits/stdc++.h>
using namespace std;

int left(int i){return (2*i)+1;}
int right(int i){return (2*i)+2;}
int parent(int i){return (i-1)/2;}


void decreaseKey(int *arr,int n,int i,int x){
    arr[i] = x;
    while (i != 0 && arr[parent(i)] > arr[i])
    {
        swap(arr[i],arr[parent(i)]);
        i = parent(i);
    }
    
}

void minHeapify(int *arr,int n,int i){
    int lt = left(i),rt = right(i);
    int smallest = i;
    if(lt < n && arr[lt] < arr[i]) smallest = lt;
    if(rt < n && arr[rt] < arr[smallest]) smallest = rt;
    if(smallest != i){
        swap(arr[i],arr[smallest]);
        minHeapify(arr,n,smallest);
    }
}


void extractMin(int *arr,int n){
    if(n == 0) return;
    if(n == 1) {n--; return;}
    swap(arr[0],arr[n-1]);
    n--;
    minHeapify(arr,n,0);
}


void deleteElement(int *arr,int n,int i){
    decreaseKey(arr,n,i,INT_MIN);
    extractMin(arr,n);
}


int main()
{
    int arr[] = {10,20,30,40,50,35,38,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    deleteElement(arr,n,3);
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}