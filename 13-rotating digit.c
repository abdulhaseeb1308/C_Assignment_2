//13-Write a program to take a three-digit number from the user and rotate its digits by 
//one position towards the right
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE THREE DIGIT NUMBER");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	printf("THE NUMBER AFTER ROTATING THE DIGIT IS %d%d",b,c);
}
