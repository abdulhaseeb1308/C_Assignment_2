//4.Write a program to swap values of two int variables without using a third variable
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER the first number \n");
	scanf("%d",&a);
	printf("Enter the second number \n");
	scanf("%d",&b);
	printf("values before swaping \n\n");
	printf("value in first is %d\n",a);
	printf("value in second is  %d\n",b);
	printf("\n\nthe values od swaping \n\n ");
	c=a;
	a=b;
	b=c;
	printf("the value in first is %d\n",a);
	printf("the value in second is %d",b);
}
