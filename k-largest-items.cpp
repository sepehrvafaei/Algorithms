#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void min_heapify(int a[], int n,int i) {
	int smallest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left< n && a[left] < a[smallest])
		smallest = left;
	if (right < n && a[right] < a[smallest])
		smallest = right;
	if (smallest != i)
	{
		swap(&a[i], &a[smallest]);
		min_heapify(a,n,smallest);
	}
}
void build_min_heap(int a[],int n){
	for (int i = n/2-1; i>=0; i--) {
		min_heapify(a,n,i);
	}
}
void heap_sort(int a[],int n){
	build_min_heap(a, n);
	for (int i = n - 1; i >= 0; i--) {
		swap(&a[0], &a[i]);
		min_heapify(a, i, 0);
	}
}
int main() {
	int nums[] = {2,8,5,7,9,1};
	heap_sort(nums, 6);
	for (auto i : nums) { cout << i; }
	cout << endl;
	system("PAUSE");
	return 0;
}