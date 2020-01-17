#include <iostream>
#include <iomanip>
using namespace std;



void ShiftMatrixInSpiralOredr(int* mat,int M,int N) {
	int top = 0, bottom = M - 1;
	int left = 0, right = N - 1;
	int prev = *(mat);

	while (1)
	{
		if (left > right)
			break;
		for (int i = left; i <= right; i++)
			swap(*(mat+top*N+i), prev);
		top++;

		if (top > bottom)
			break;
		for (int i = top; i <= bottom; i++)
			swap(*(mat+i*N+right), prev);
		right--;

		if (left > right)
			break;
		for (int i = right; i >= left; i--)
			swap(*(mat+bottom*N+i), prev);
		bottom--;

		if (top > bottom)
			break;
		for (int i = bottom; i >= top; i--)
			swap(*(mat+i*N+left), prev);
		left++;
	}
	*(mat) = prev;
}
int main()
{
	int mat[5][5] =
	{
		{ 1,  2,  3,  4, 5},
		{16, 17, 18, 19, 6},
		{15, 24, 25, 20, 7},
		{14, 23, 22, 21, 8},
		{13, 12, 11, 10, 9}
	};

	ShiftMatrixInSpiralOredr((int*)mat,5,5);

	for (auto &row: mat)
	{
		for (auto &col: row) {
			cout << setw(3) << col;
		}
		cout << '\n';
	}
	system("pause");
	return 0;

}