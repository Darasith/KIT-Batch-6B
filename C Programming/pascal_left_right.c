#include <stdio.h>
main() {
	int i,j,k;
	for (i=1;i<100;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}