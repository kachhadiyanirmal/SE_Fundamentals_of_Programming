#include<stdio.h>
main(){
	int num,rev,rem;
	
	printf("enter the num=");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n REVERS NUMBER IS= %d",rev);
}
