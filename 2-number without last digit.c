//Write a program to print a given number without its last digit
#include<stdio.h>
int main ()
{
	int num,num2;
	printf("Enter the number ");
	scanf("%d",&num);
	num2=num/10;
	printf("The Number without its last digit is %d",num2);
}
