//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
//convert it into USD.
#include<stdio.h>
#include<math.h>
float main()
{
	float inr,usd;
	printf("ENTER THE AMOUNT IN INR ");
	scanf("%f",&inr);
	usd=inr/82.41;
	printf("THE AMOUNT IN USD IS %f",usd);
}
