#include<stdio.h>
main(){
	int num,num1,num2,rev,rem,sum;
	
	printf(" enter the num=");
	scanf("%d",&num);
	
	num1=num%10;
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	num2=rev%10;
	sum=num1+num2;
	printf("\n sum of first and last digit=%d",sum);
}
