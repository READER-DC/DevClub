#include <stdio.h>

int main() {
    int numbersOfDay, leapYear = 366, noLeapYear = 365;
    
    scanf("%d", &numbersOfDay);
    
    if ( numbersOfDay == leapYear ) {
        printf("yes\n");
    } else if ( numbersOfDay == noLeapYear ) {
        printf("no\n");
    } else {
        printf("Invalid param\n");
    }
    
    return 0;
}


#include <stdio.h>

int main() {
    int numbersOfDay;
    
    scanf("%d", &numbersOfDay);
    
    if ( numbersOfDay == 366 ) {
        printf("yes\n");
    } else if ( numbersOfDay == 365 ) {
        printf("no\n");
    } else {
        printf("Invalid param\n");
    }
    
    return 0;
}
