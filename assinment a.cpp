#include <stdio.h>
int main()
{
double age,salary;
printf("enter your age:\n ");
scanf ("%lf,",&age);

printf("please enter your anual salary: \n	");
scanf("%lf,",& salary);
if(age>=21 && salary>=21000){printf("congratulation  you qualify for a loan \n");
}else {printf("Unfortunatly we unable to offer you a loan at this time.\n");}
	return 0;
}