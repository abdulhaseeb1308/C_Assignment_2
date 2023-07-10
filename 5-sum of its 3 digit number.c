#include<stdio.h>
int main()
{
	int num,a,b,c,d,sum;
	printf("ENTER the first number \n");
	scanf("%d",&num);
	a=num/100;
	c=num%10;
	b=num/10;
	d=b%10;
	sum=a+c+d;
	printf("the sum of 3 digit number is %d",sum);
	
}
