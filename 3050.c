#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, j, k=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d ", k++);
		}
		printf("\n");
	}
	return 0;
}
