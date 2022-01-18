#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5][5] = { 0 };
	/*int size;
	scanf("%d ", &size);
	int arr2[][];*/
	// 후에 입력받은 값으로 수행할려면 int n = 0; i<n, j<n, y<n, (i*n + j+1), (i*n + n-j)
	for (int i = 0; i < 5; i++) {
		
		if (i % 2 == 0) { 
			for (int j = 0; j < 5; j++) {
				arr[i][j] = (i * 5) + j + 1;
				//("%4d", arr[i][j]);
			}
		}
		else if(i % 2 !=0) { 
			for (int j = 4; j >= 0; j--) {
				arr[i][j] = (i * 5) + 5 - j;
				//printf("홀수 행일때 %4d", arr[i][j]); 
			}
		}		
	}

	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 5; y++) {
			printf("%4d ", arr[i][y]);
		}
		printf("\n");
	}
	
}
