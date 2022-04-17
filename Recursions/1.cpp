#include<iostream>
using namespace std;

void fun(){
    cout << "Harsh"<<endl;
    fun();
}

int main(){
    fun();
    return 0;
}