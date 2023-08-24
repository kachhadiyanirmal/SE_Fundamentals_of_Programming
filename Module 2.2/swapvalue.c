#include<stdio.h>
main(){
	int a,b;
	printf("Enter number a=");
	scanf("%d",&a);
	printf("Enter number b=");
	scanf("%d",&b);
	a=a+b;
	//printf("\nthis is valuue of a=%d",a);
	b=a-b;
	printf("\nthis is valuue of b=%d",b);
	a=a-b;
	printf("\nthis is valuue of a=%d",a);
	
}
