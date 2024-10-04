//programme to calculate the fine for overdue library books
#include <stdio.h>	   
int main()
{int book_ID,Due_date,Return_date,days,rate,amount;
printf("enter Book Id :\n");
scanf("%d",& book_ID);

printf("pleas enter due date:\n");
scanf("%d",& Due_date);

printf("enter return date:\n");
scanf("%d",&Return_date);

days=Return_date-Due_date;
if(days<=7){rate=20;
}else if(days>=8 && days  <=14  ){rate=50;
}else(rate=100);

amount=rate*days;
printf("bookID: %d\n,duedate: %d\n,returndate: %d\n,days overdue: %d\n,finerate: %d\n,fineamount: %d\n"
,book_ID,Due_date,Return_date,days,rate,amount);



	
	return 0;
}