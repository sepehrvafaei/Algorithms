#include<iostream>
using namespace std;

void mergeSort(int arr[], int l, int r) {
	if (l<r) {
		int m = (r +l)/2;
		int n1 = m - l + 1;
		int n2 = r - m;
		int left[n1];
		int right[n2];
		for (int i = l; i < n1;i++) {
			arr[i] = left[i];
		}
		for (int i =m+1; i <n2; i++) {
			arr[i] = right[i];
		}
		mergeSort(left,l,m);
		mergeSort(right,m+1,r);
		
		int i = 0; int j = 0;
		int k = l;
		while (i < (m - l + 1) && j < (r-m)) {
			if (left[i] < right[j]) {
				arr[k] = left[i];
				i += 1;
			}
			else {
				arr[k] = right[j];
				j += 1;
			}
			k += 1;
		}
		while( i < (m-l+1)) {
			arr[k] = left[i];
			i += 1;
			k += 1;
		}
		while (j < (r-m)) {
			arr[k] = right[j];
			j += 1;
			k += 1;
		}
	}
}
template<class T>
void printArray(T A[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << A[i] << " ";
		cout << endl;
	}
}
int main() {
	int arr[6] = { 12, 11, 13, 5, 6, 7 };
	mergeSort(arr, 0, 5);
	printArray(arr, 6);
	cin.get();
	return 0;
}