
#include <stdio.h>

int main() {
	int i, j, k;
	
	for(i = 1; i < 10; i++){
		for(j = i; j < 10; j++){
			printf(" ");
		}
        //通过空格和×的数量来判断
		for(k = 0; k < i*2-1; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
