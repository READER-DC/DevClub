#include <stdio.h>

int main() {
    int number, minutes;
    
    scanf("%d %d", &number, &minutes);
    
    if ( number == 101 || number == 102 || number == 103 || number == 104 || number == 112 ) {
        printf("%d$\n", 0*minutes);
    } else if ( number < 1000 && number > 99 ) {
        printf("%d$\n", 40*minutes);
    } else if ( number >= 1000000 && number < 10000000 ) {
        printf("%d$\n", 1*minutes);
    } else {
        printf("%d\n", -1);
    }
    
    return 0;
}






/*
#include <stdio.h>

int main() {
    int number, minutes;
    
    scanf("%d %d", &number, &minutes);

    if(number>99 && number<10000000){
        if (number>1000000){
            printf("%d\n", 1*minutes);
        } else if (number == 101 || number == 102 || number == 103 || number == 104 || number == 112) {
            printf("%d\n", 0);
        } else if (number<1000){
            printf("%d\n", 40*minutes);
        } else {
            printf("%d\n", -1);
        }
    } else {
        printf("%d\n", -1);
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int number, minutes;
    
    scanf("%d %d", &number, &minutes);
    shortNum = number > 99 && number < 1000;
    cityNum = number >= 1000000 && number < 10000000;
    cpecNum = number == 101 || number == 102 || number == 103 || number == 104 || number == 112;
    answer = shortNum & cityNum
    if ( cpecNum  == 1) {
        printf("%d$\n", 0*minutes)
    }
    if ( shortNum == 1 && cpecNum == 0) {
        printf("%d$\n", 40*minutes);
        } 
    if ( cityNum == 1 ) {
            printf("%d$\n", 1*minutes);
        }
    if (answer == 0)
        printf("%d\n", -1);
 
    
    return 0;
}
*/

/*
Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за звонок на короткий номер. За звонок по номерам специальных служб плата не взимается. В случае неопределенности вывести -1.
Пример ввода

1488666 10

Пример вывода

10$

Пояснение

Коротким номером считается любой трехзначный номер.
Городским номером считается любой семизначный номер.
Номера телефонов не могут начинаться с ноля.
Номера спецслужб: 101, 102, 103, 104, 112.
*/


/*
#include <stdio.h>

int main() {
    int number, minutes, cheker;
    
    scanf("%d %d", &number, &minutes);
    cheker = 0;
    if ( number > 99 && number < 1000 || number >= 1000000 && number < 10000000 ) {
        if ( number == 101 || number == 102 || number == 103 || number == 104 || number == 112 ) {
            printf("%d$\n", 0);
            cheker = 1;
        }
        if ( number > 99 && number < 1000 && cheker != 1 ) {
            printf("%d$\n", 40*minutes);
        }
        if ( number >= 1000000 && number < 10000000 ) {
            printf("%d$\n", minutes);
        }
    } else {
        printf("%d\n", -1);
    }
    
    return 0;
    
}
*/