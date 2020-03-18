#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void print_arr(int arr[],int size){
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr[6] = { 5,3,2,4,1,6 };
	insertion_sort(arr,6);
	print_arr(arr,6);
	system("PAUSE");
	return 0;
}
