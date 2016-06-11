#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, j;
	scanf("%d", &n);
	if((n%2)>0){ 
		int m = (n/2+1);				
		for(i=1; i<=n; i++){
			for(j=1; j<=abs(m-i); j++){
				printf(" ");
			}
			for(j=1; j<=n-abs(m-i)*2; j++){
				printf("*");
			}
			printf("\n");
		}
	} else {
		return 0;
	}
	return 0;
}
