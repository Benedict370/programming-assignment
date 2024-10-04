#include <stdio.h>
#include <math.h>
int main()
{double principal,r,t,total_amount,compund_interest;
printf("enter the principal amount");
scanf("%lf",&principal);
 
 printf("enter the rate of intrest");
 scanf("%lf",&r);
 
 printf("enter the time");
 scanf("%lf",&t);
 
 total_amount=principal*pow((1+r/100),t);
 compund_interest=-total_amount-principal;
 
 printf("the compound intrest is%.2lf \n",compund_interest);
 printf ("The total amount after %.1lf years is: %.2lf \n",t,total_amount);	
	return 0;
}