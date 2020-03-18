#include<iostream>
using namespace std;

void change(int *x, int *y) {
	int z = *x;
	*x = *y;
	*y = z;
}

void selection_sort(int arr[],int size) {
	for (int i = 0; i < size - 1;i++) {
		int min = i;
		for (int j = i+1; j < size; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		change(&arr[i], &arr[min]);
	}
}
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[8] = { 8,7,5,6,4,2,3,1 };
	selection_sort(arr, 8);
	print(arr, 8);
	cout << endl;
	system("PAUSE");
	return 0;
}
