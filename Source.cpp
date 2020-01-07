#include<iostream>
using namespace std;

const int M = 5; const int N = 5;
void printMatrixInSpiral(int a[M][N]) {
	int left = 0; int right = N-1;
	int top=0; int bottom=M-1;
	while (1) {
		if (left > right) {
			break;
		}
		for (int i = left; i <=right; i++) {
			cout << a[top][i] << " , ";
		}
		top += 1;

		if (top > bottom) {
			break;
		}
		for (int i = top; i <=bottom; i++) {
			cout << a[i][right]<< " , ";
		}
		right -=1;

		if (left > right) {
			break;
		}
		for (int i =right ; i>=left; i--) {
			cout << a[bottom][i]<<" , ";
		}
		bottom -= 1;
		
		if (top > bottom) {
			break;
		}
		for (int i =bottom ; i>=top; i--) {
			cout << a[i][left]<<" , ";
		}
		left += 1;
	}
}
int main(){
		int mat[M][N] =
		{
			{ 1,  2,  3,  4, 5},
			{16, 17, 18, 19, 6},
			{15, 24, 25, 20, 7},
			{14, 23, 22, 21, 8},
			{13, 12, 11, 10, 9}
		};

		printMatrixInSpiral(mat);

		return 0;}