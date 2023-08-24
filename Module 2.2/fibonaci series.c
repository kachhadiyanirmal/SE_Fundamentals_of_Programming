#include<stdio.h>
main(){
	int num1=0,num2=1,i,j,ans;
	printf("how many  times show series=");
	scanf("%d",&j);
	
	printf("\n fibonaci series %d  %d",num1,num2);
	
	for(i=1;i<=j;i++){
		ans=num1+num2;
		printf(" %d",ans);
		num1=num2;
		num2=ans;
	}
}
