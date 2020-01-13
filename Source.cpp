#include<iostream>
using namespace std;

const int M = 5; const int N = 5;
const int K = 25;
void arrayToSpiralMatrix(int arr[K],int a[M][N]) {
	int left = 0; int right = N - 1;
	int top = 0; int bottom = M - 1;
	int index = 0;
	while (1) {
		if (left > right) {
			break;
		}
		for (int i = left; i <= right; i++) {
			a[top][i] = arr[index++];
		}
		top += 1;

		if (top > bottom) {
			break;
		}
		for (int i = top; i <= bottom; i++) {
			a[i][right] = arr[index++];
		}
		right -= 1;

		if (left > right) {
			break;
		}
		for (int i = right; i >= left; i--) {
			a[bottom][i] = arr[index++];
		}
		bottom -= 1;

		if (top > bottom) {
			break;
		}
		for (int i = bottom; i >= top; i--) {
			a[i][left] = arr[index++];
		}
		left += 1;
	}
}
int main() {
	
	int arr[K] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
					16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	int a[M][N];

	arrayToSpiralMatrix(arr, a);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << '   ' << a[i][j];
		cout << '\n';
	}

	return 0;
}