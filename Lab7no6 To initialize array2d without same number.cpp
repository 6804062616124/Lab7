#include <stdio.h>

void initArray(int arr[20][20], int m, int n);
void printArray(int arr[20][20], int m, int n);

void initArray(int arr[20][20], int m, int n) {
	int i, j;
	int num = 100;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = num;
			num++;
		}
	}
}

void printArray(int arr[20][20], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", arr[i][j]);
		}
	printf("\n");
	}
}

int main() {
	int M, N;
	int arr[20][20];

	scanf("%d %d", &M, &N);

	initArray(arr, M, N);
	printArray(arr, M, N);

return 0;
}
