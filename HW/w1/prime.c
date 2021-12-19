/*
Вывести N-ное по счёту простое число (см. Википедию).
N считать с клавиатуры.
Оптимизировать работу программы, насколько это возможно.
В случае неопределенности ответа вывести -1.
Пример ввода

3

Пример вывода

5
*/

#include <stdio.h>

int main() {
    int num, counter, answer, temp;
    
    answer = 0;
    
    scanf("%d", &num);
    if ( num < 1 ) {
        answer = num;
        printf("%d\n", -1);
    }
    
    for ( int i = 2; answer != num; i++ ) {
        counter = 0;
        for ( int j = 1; j <= i; j++ ) {
            if ( i % j == 0 ) {
                counter += 1;
            }
        }
        
        if ( counter <= 2 ) {
            temp = i;
            answer += 1;
        }
        if ( answer == num ) {
            printf("%d\n", temp);
        }
    }
    
    return 0;
}







/*
#include <stdio.h>

int main() {
    int num, counter, answer, temp;
    counter = 2;
    answer = 0;

    scanf("%d", &num);

    for ( int i= 2; answer != num; i++ ){
        counter = 0;
        for ( int j = 1 ;j <= i; j++ ) {
            if ( i % j == 0 ) {

                counter +=1; 
                printf("i = %d j = %d count = %d\n", i, j, counter);
            }
            
            
        }
        
        if ( counter <= 2) {
            temp = i;
                answer +=1;
                printf("answer = %d\n", answer);
            }
        if (answer == num) {
            printf("простое = %d\n", temp);

        }
        
        
    }

    return 0;
}
*/