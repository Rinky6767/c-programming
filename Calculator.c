#include<stdio.h>
#include<conio.h>
void main()
{
 int sum,sub,div,mul;
 int num1,num2;
 char operator;
printf("\t\<<<-->>> \'Calculator\' \<<<-->>>");
printf("\n");
printf("\n Enter the operator(*,+,-,/): ");
scanf("%c",&operator);
printf("\n Enter the first and second number: ");
scanf("%d %d",&num1,&num2);
printf("\n");

switch (operator)
{ 
 case '+':
        sum= num1 + num2;
        printf("Result %d %c %d = %d",num1, operator,num2,sum);
        break;
        
 case '-':
           sub= num1 - num2;
        printf("Result %d %c %d= %d",num1, operator,num2,sub);
        break;
        
 case '/':
           div= num1 / num2;
        printf("Result %d %c %d = %d",num1, operator,num2,div);
        break;
        
   
 case '*':
           mul= num1 * num2;
        printf("Result %d %c %d= %d",num1, operator,num2,mul);
        break;   
        
 default:
         printf("\Invalid");   
        }    
    getch(); 
}