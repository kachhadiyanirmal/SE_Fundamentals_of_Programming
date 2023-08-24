#include<stdio.h>
main(){
	int ch;
	
	printf("\n press 1 for a day 1 ");
	printf("\n press 2 for  a day 2 ");
	printf("\n press 3 for  a day 3 ");
	printf("\n press 4 for  a day 4 ");
	printf("\n press 5 for  a day 5 ");
	printf("\n press 6 for  a day 6 ");
	printf("\n press 7 for  a day 7 ");
	printf("\n Enter the ch =");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\n Today is Sunday");
		break;
		
		case 2:
			printf("\n Today is Monday");
		break;
		
		case 3:
			printf("\n Today is tuesday");
		break;
		
		case 4:
			printf("\n Today is wednesday");
		break;
		
		case 5:
			printf("\n Today is thursday");
		break;
		
		case 6:
			printf("\n Today is Friday");
		break;
		
		case 7:
			printf("\n Today is Satarday");
		break;
		
	}
}
