#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[40];
    int choise,i;
    do
    {
        printf("\tMENU");
        printf("\n------------------------------\n");
        printf("1:Find Length of String");
        printf("\n2:Find Reverse of String");
        printf("\n3:Concatenate Strings");
        printf("\n4:Copy String ");
        printf("\n5:Compare Strings");
        printf("\n6:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1:
                printf("Enter String: ");
                scanf("%s",str1);
                i=strlen(str1);
                printf("Length of String : %d\n\n",i);
            break;
            case 2:
                printf("Enter String: ");
                scanf("%s",str1);
                strrev(str1);
                printf("Reverse string : %s\n\n",str1);
            break;
            case 3:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("Enter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n\n",str1);
            break;
            case 4:
                printf("Enter copy string:");
				scanf("%s%s",&str1,str2);
				i=strcpy(str1,str2);
				printf("copy of string%s",i);
				break;
            break;
            case 5:
                printf("Enter First String: ");
                scanf("%s",str1);
                printf("Enter Second String: ");
                scanf("%s",str2);
                i=strcmp(str1,str2);
                if(i==0)
                {
                    printf("Strings are Same\n\n");
                }
                else
                {
                    printf("Strings are Not Same\n\n");
                }
            break;
            case 6:
                exit(0);
            break;
            default:
                printf("Invalid Input.\n\n ");
        }
    }while(choise!=6);
    return 0;
}