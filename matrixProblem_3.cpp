#include <iostream>
#include <iomanip>
using namespace std;

const int  M= 5;
const int N =5;

void ShiftMatrixInSpiralOredr(int mat[M][N]){
		int top = 0,bottom = M - 1;
		int left = 0, right = N - 1;
		int prev = mat[0][0];

		while (1)
		{
			if (left > right)
				break;
			for (int i = left; i <= right; i++)
				swap(mat[top][i], prev);
			top++;

			if (top > bottom)
				break;
			for (int i = top; i <= bottom; i++)
				swap(mat[i][right], prev);
			right--;

			if (left > right)
				break;
			for (int i = right; i >= left; i--)
				swap(mat[bottom][i], prev);
			bottom--;

			if (top > bottom)
				break;
			for (int i = bottom; i >= top; i--)
				swap(mat[i][left], prev);
			left++;
		}
		mat[0][0] = prev;
	}
int main()
	{
		int mat[M][N] =
		{
			{ 1,  2,  3,  4, 5},
			{16, 17, 18, 19, 6},
			{15, 24, 25, 20, 7},
			{14, 23, 22, 21, 8},
			{13, 12, 11, 10, 9}
		};

		ShiftMatrixInSpiralOredr(mat);

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
				cout << setw(3) << mat[i][j];
			cout << '\n';
		}

		return 0;
	}