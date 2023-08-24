//wap to display n terms of odd natural number and their sum.
#include<stdio.h>
main(){
	int num1,num2,i,j,odd=0,even=0;
	
	printf("enter the num1=");
	scanf("%d",&num1);
	printf("enter the num2=");
	scanf("%d",&num2);
	
	if(num1!=0){
		
		for(i=num1;i<=num2;i++){
		
			if( i%2==0){
			printf("\n%d is even",i);
			
			}
			else{
			printf("\n%d is odd",i);
			odd=odd+i;
			}
		}
	}
	else{
			printf("\n ZERO IS NOT ALLOW BEACUSE IT`S NOT A NATURAL NUM",i);
		}
	
	
    printf("\n\nodd num sum is =%d",odd);
}
