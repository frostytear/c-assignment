#include <stdio.h>
#include <stdlib.h>
int main(){
    int f, i;
    scanf("%d", &f);
    for(i=1; i<=f; i++){
        if(i==4)
            continue;
        printf("floor %d\n", i);
    }
    return 0;
}
