#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}

// Function to calculate total days from 1/1/0000 to the given date
int totalDays(struct Date date) {
    int total = 0;
    
    // Add days for complete years
    for (int year = 0; year < date.year; year++) {
        total += isLeapYear(year) ? 366 : 365;
    }
    
    // Add days for complete months in the current year
    for (int month = 1; month < date.month; month++) {
        total += daysInMonth(month, date.year);
    }
    
    // Add days in the current month
    total += date.day;
    
    return total;
}

// Function to calculate the difference between two dates
int calculateDateDifference(struct Date date1, struct Date date2) {
    return totalDays(date2) - totalDays(date1);
}

int main() {
	int bookID,rate,amount;
    struct Date date1, date2;
    printf("Enter book ID:\n");
    scanf("%d",&bookID);
    // Input first date
    printf("Enter duedate (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input second date
    printf("Enter return date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate the difference
    int days = calculateDateDifference(date1, date2);
    
//If statement
if(days<=7){rate=20;
}else if(days>=8 && days  <=14  ){rate=50;
}else(rate=100);

amount=rate*days;
printf("bookID: %d\ndays overdue: %d\nfinerate: %d\nfineamount: %d\n"
,bookID,days,rate,amount);
printf("Due Date: %02d/%02d/%04d\n", date1.day, date1.month, date1.year);
printf("Second Date: %02d/%02d/%04d\n", date2.day, date2.month, date2.year);


    return 0;
}
