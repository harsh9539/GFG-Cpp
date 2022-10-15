#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^') return 3;
    else if(c == '+' || c == '-') return 1;
    else if (c == '*' || c == '/') return 2;
    else return -1;
}

void infiToPre(string str){
    reverse(str.begin(),str.end());
    stack<char> st;
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if(c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A'){
            result += c;
        }
        else if(c == ')') st.push(')');
        else if(c == '('){
            while(!st.empty() && st.top() != ')'){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(c) <= prec(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    cout << result << endl;
}

int main(){
    string str = "(x+y*z/w+u)";
    infiToPre(str);
    return 0;
}