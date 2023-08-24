#include<stdio.h>
main(){
	char i,j,x='A';	
	
	for(i='A';i<='E';i++){
		for(j='A';j<=i;j++){
			printf(" %c",j);
		}
		printf("\n");
	}
}

