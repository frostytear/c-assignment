#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, n, m;
	scanf("%d%d", &n, &m);
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
