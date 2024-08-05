#include<stdio.h>

void main()
{
float num1, num2, cal; 
char ope; 

printf("=====================Simple Calculator===============\n");

printf("Enter First No:");
scanf("%f", &num1); 

printf("Enter Second No:");
scanf("%f", &num2); 

printf("Enter your choice: +  | - | / | * \n");
scanf(" %c", &ope); 

  
 if(ope == '+')
 {
  cal= num1 + num2;
  printf("Result is: %f",cal);
 }

 else if(ope == '-')
 {
  cal= num1 - num2;
  printf("Result is: %f",cal);
 }
  
 else if(ope == '/')
 {
 if(num2==0)
 {
 	printf("Can not divided by zero");
 }
 else
 {	
  cal= num1 / num2;
  printf("Result is: %f",cal);
 }
 }
  
 else if(ope == '*' )
 {	
  cal= num1 * num2;
  printf("Result is: %f",cal);
 }
  
 else
 {
 printf("Invalid Input"); 
 }

}