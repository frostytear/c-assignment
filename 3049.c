#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
