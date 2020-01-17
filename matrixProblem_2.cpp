#include <iostream>
using namespace std;

void printMatrixInSpiralOrder(int *mat,int M,int N)
{
	int top = 0, bottom = M - 1;
	int left = 0, right = N - 1;

	while (1)
	{
		if (left > right)
			break;
		for (int i = left; i <= right; i++)
			cout << *(mat+top*N+i) << " ";
		top++;

		if (top > bottom)
			break;
		for (int i = top; i <= bottom; i++)
			cout <<*(mat+i*N+right) << " ";
		right--;

		if (left > right)
			break;
		for (int i = right; i >= left; i--)
			cout <<*( mat+bottom*N+i) << " ";
		bottom--;

		if (top > bottom)
			break;
		for (int i = bottom; i >= top; i--)
			cout << *(mat+i*N+left) << " ";
		left++;
	}
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

	printMatrixInSpiralOrder(*mat,5,5);
	system("PAUSE");
	return 0;
}
