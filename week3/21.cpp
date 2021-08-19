#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	for (int y = 1; y <= a ; y++) {
		for (int x = 1; x <= a ; x++) {
			/*printf("(%d,%d) ",x,y);*/
			if (x <= a && y <= a) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}