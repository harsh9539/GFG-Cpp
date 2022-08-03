#include <bits/stdc++.h>
using namespace std;
struct Deque{
	int size,cap,*arr;
	Deque(int c){
		cap = c;
		size = 0;
		arr = new int[c];
	}
	bool isFull(){return (size==cap);}
	bool isEmpty(){return (size == 0);}
	void insertRear(int x){
		if(isFull()) return ;
		arr[size] = x;
		size++;
	}
	void deleteRear(int x){
		if(isEmpty()) return;
		size--;
	}
	int getRear(){
		int val =  arr[size-1];
		if(isEmpty()) return -1;
		else return val;
	}
	void insertFront(int x){
		if(isFull()) return;
		for (int i = size-1;i>=0; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = x;
		size++;
	}
	void deleteFront(){
		if(isEmpty()) return;
		for (int i = 0; i < size-1; ++i)
		{
			arr[i] = arr[i+1];
		}
		size--;
	}
	int getFront(){
		if(isEmpty()) return -1;
		else return arr[0];
	}
	void display(){
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main(){
	int n;
	cin >> n;
	Deque d(n);
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		d.insertRear(x);
	}
	// d.insertRear(10);
	// d.insertRear(20);
	cout << d.getRear()<<endl;
	cout << d.getFront() << endl;
	d.display();
	cout << d.isFull() << endl;
	cout << d.isEmpty() << endl;

	
	return 0;
}