#include<stdio.h>
main(){
	int i,j;
	
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){
			printf(" *");		
		}
		printf("\n");
	}
	i=i-2;
	//printf("%d",i);
	for(i=i;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" *");		
		}
		printf("\n");
	}
}
