//Write a program to print unit digit of a given number
#include<stdio.h>
int main ()
{
	int num,num2;
	printf("ENTER THE NUMBER");
	scanf("%d",&num);
	num2=num%10;
	printf("The Unit Digit Of a given Number is %d",num2);
}

