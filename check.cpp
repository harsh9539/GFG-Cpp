#include<bits/stdc++.h>
using namespace std;
#define maxi(x,y) (x>y?x:y)
#define msg(x) #x
#define pi 3.1425
#ifndef pie
    #define pie 3.414
#endif

int main(){
    cout << pi << endl;
    cout << maxi(10,12) << endl;
    cout << msg(hello) << endl;
    vector<int> myvec{1,2,3,4,5};
    cout << myvec.size();
    int x = 5,y = 10,z = 15;
    int *arr[] = {&x,&y,&z};
    cout<<endl << arr[1];
    int *p = NULL;
    p = new int;
    *p = 100;
    cout << endl << *p;
    return 0;
}