#include<bits/stdc++.h>
using namespace std;
#define for(i,n) for(int i =0;i<n;i++)
    stack<int> st;
/*
The queries can be of 4 types:

1-> i x: (adds element x in the stack).

2-> r: (removes the topmost element from the stack).

3-> h: Prints the topmost element.

3-> f y: (check if the element y is present or not in the stack). Print "Yes" if present, else "No".
*/

void insert(stack<int> st,int x){
        st.push(x);
}
bool remove(stack<int> st){
st.pop();
return true;
}
void headStack(stack<int> st){
    int ans = st.top();
    cout << ans;
}
void isEmpty(stack<int> st,int y){
    stack<int> st2;
    bool find = false;
    for(i,st.size()){
        if(st.top()==y) find = true;
        else{
            st2.push(st.top());
            st.pop();
        }
    }
    if(find) cout << "yes";
    else cout << "no";
}
int main(){
    int t;
    cout << "How many Queries you want: ";
    cin >> t;
    int size = t;
    while(t--){
        cout << "Enter Operation: " ;
        char ch[1];
        cin >> ch[0];
        int ans;
        if(ch[0]=='i'){
            int x;
            cout << "Enter number: ";
            cin >> x;
            insert(st,x);
        }
        if(ch[0]=='r'){
            remove(st);
        }
        if(ch[0]=='h'){
            cout << "inside this";
            headStack(st);
        }
        if(ch[0]=='f'){
            int y;
            cout << "Enter number: ";
            cin >> y;
            isEmpty(st,y);
        }
        }
    
    return 0;
}