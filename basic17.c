#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, min, num[5];
	printf("\nPlease enter five numbers.\n");
	for(i=0; i<5; i++){
		printf("no.%d=",i+1);
		scanf("%d",&num[i]);
		if(i==0) min=num[0];
		else{
			if(num[i]<min)
			min = num[i];
		}
	}
	
	printf("\nThe five numbers are ");
	for(i=0; i<4; i++){
		printf("%d, ",num[i]);
	}
	printf("%d.\n",num[4]);
	printf("And minimum value is %d.\n",min);
	system("pause");
	return 0;
}
