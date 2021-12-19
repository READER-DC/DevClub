/*
Считывать с клавиатуры пароль. Если пароль совпадает с 1488, 
вывести на экран "accepted", иначе вывести на экран "incorrect password". 
После пяти неудачных попыток вывести на экран "denied".
*/
#include <stdio.h>

int main() {
    int password;
    int try = 5;
    
    for ( ; try >= 0; try-- ) {
        scanf("%d", &password);
        if ( try == 0 ) {
            printf("denied\n");
        } else if ( password == 1488 ) {
            printf("accepted\n");
            try = -1;
        } else {
            printf("incorrect password\n");
        }
    }
    
    return 0;
}
