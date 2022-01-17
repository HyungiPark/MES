#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main() {
	int j, i, k, key;
	int a[10];

	j = 0;

	do {
		scanf("%d ", &a[j]);
		j++;
	} while (j <= 9);

	/*for (j = 0; j < 10; j++) {
		scanf("%d ", &a[j]);
	}*/
	
	for (i = 1; i <= 9; i++) {
		key = a[i];
		for (k = i - 1; k >= 0; k--) {
			if (a[k] > key) {
				a[k + 1] = a[k];
			}
			else {
				break;
			}
		}
		a[k + 1] = key;
	}

	for (i = 0; i < 10; i++) {
		printf(" %d ", a[i]);
	}
}
