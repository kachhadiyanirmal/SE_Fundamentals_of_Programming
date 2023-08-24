#include<stdio.h>
main(){
	char ch;
	
	printf("Enter character=");
	scanf("%c",&ch);
	
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	
			printf("this ch is a vowel",ch);
		break;
	
	default:
		printf("this is not Vowel",ch);
		break;
	}
}
	



