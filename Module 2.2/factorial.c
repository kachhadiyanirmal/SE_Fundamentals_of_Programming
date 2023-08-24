#include<stdio.h>
main(){
	int i,num,ans=1;
	printf("\n enter the num=");
	scanf("%d",&num);
	
	for(i=num;i>0;i--){
		ans=ans*i;
		}
	printf("\n factorial series %d is %d",num,ans);
}
