#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int my, i;
	char money[5];
	scanf("%d", &my);

	if(my>0 && my<100000){
		sprintf(money, "%d", my);
		//printf("%s\n", money);
		int length = strlen(money);
		//printf("%d", length);
		for(i=0; i<length; i++){
		//printf("%c", my[i]);
		
			switch(money[i]){
			case '1':
	  			printf("³ü"); break;
	 		case '2':
	  			printf("¶L"); break;
	 		case '3':
	  			printf("°Ñ"); break;
	 		case '4':
	  			printf("¸v"); break;
	 		case '5':
	  			printf("¥î"); break;
	 		case '6':
	  			printf("³°"); break;
	 		case '7':
	  			printf("¬m"); break;
	 		case '8':
	  			printf("®Ã"); break;
	 		case '9':
	  			printf("¨h"); break;
	  		}
  		
	  		switch(length-i){
			case 2:
	  			printf("¬B"); break;
	 		case 3:
	  			printf("¨Õ"); break;
	 		case 4:
	  			printf("¥a"); break;
	 		case 5:
	  			printf("¸U"); break;
	  		}
    	}
    	printf("¤¸¾ã\n");
	}else{
		printf("Not 1~99999\n");
		return 0;
	}
	/*

    */
	return 0;
}
