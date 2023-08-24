#include<stdio.h>
main(){
	int num,rem,max;
	
	printf("enter the num=");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		num=num/10;
		if(rem>max){
			max=rem;
		}
	}
	printf("\n Large num is %d",max);
}
