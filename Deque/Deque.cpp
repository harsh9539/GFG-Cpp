#include <bits/stdc++.h>
using namespace std;
struct Deque{
	int size,cap,*arr,front;
	Deque(int c){
		cap = c;
		front = 0;
		size = 0;
		arr = new int[c];
	}
	bool isFull(){return (size==cap);}
	bool isEmpty(){return (size == 0);}
	void insertRear(int x){
		if(isFull()) return ;
		int new_rear = (front+size)%cap;
		arr[new_rear] = x;
		// arr[size] = x;
		size++;
	}
	void deleteRear(int x){
		if(isEmpty()) return;
		size--;
	}
	int getRear(){
		// int val =  arr[size-1];
		if(isEmpty()) return -1;
		else return arr[(front+size-1)%cap];
	}
	void insertFront(int x){
		if(isFull()) return;
		// for (int i = size-1;i>=0; i--)
		// {
		// 	arr[i+1] = arr[i];
		// }
		
		// arr[0] = x;
		front = (front+cap-1)%cap;
		arr[front] = x;
		size++;
	}
	void deleteFront(){
		if(isEmpty()) return;
		// for (int i = 0; i < size-1; ++i)
		// {
		// 	arr[i] = arr[i+1];
		// }
		front = (front+1)%cap;
		size--;
	}
	int getFront(){
		if(isEmpty()) return -1;
		else return arr[front];
	}
	// void display(){
	// 	for (int i = 0; i < size; ++i)
	// 	{
	// 		cout << arr[i] << " ";
	// 	}
	// 	cout << endl;
	// }
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
	// cout << d.getRear()<<endl;
	// cout << d.getFront() << endl;
	// d.display();
	d.deleteFront();
	d.insertRear(80);
	// d.display();

	// cout << d.isFull() << endl;
	// cout << d.isEmpty() << endl;

	
	return 0;
}