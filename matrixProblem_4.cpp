#include<iostream>
using namespace std;

void modify(int *mat, int M, int N) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (*(mat + i * N + j) == 0) {
				for (int k = 0; k < N; k++) { *(mat + i * N + k) = 2; }
				for (int h = 0; h < M; h++) { *(mat + h * N + j) = 2; }

			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (*(mat + i * N + j) == 2) { *(mat + i * N + j) = 0; }
		}
	}
}
void printMatrix(int *mat, int M, int N) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << "  " << *(mat + i * N + j);
		}
		cout << endl;
	}
}
int main() {
	int mat[][4] = { {1,1,0,1},
					 {1,0,1,1},
					 {1,1,1,1}};
	modify(*mat, 3, 4);
	printMatrix(*mat,3,4);
	cin.get();
	return 0;
}