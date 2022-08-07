#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

	int pivot = arr[end];
	int i = start -1;
	for (int j = start; j < end; ++j)
	{
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	i++;
	swap(arr[i],arr[end]);
	return i;
}

void quickSort(int arr[], int start, int end)
{

	if(start<end){
		int pi = partition(arr,start,end);
		quickSort(arr,start,pi-1);
		quickSort(arr,pi+1,end);
	}
}



int main()
{

	int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete [] arr;
	return 0;
}
