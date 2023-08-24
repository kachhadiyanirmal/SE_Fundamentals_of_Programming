#include<stdio.h>
main(){
	int i,j,num;
	
	printf("Enter the num=");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		for(j=1;j<=num;j++){
			printf("\t %d * %d = %d",j,i,i*j);
		}
		printf("\n");
	}
}
