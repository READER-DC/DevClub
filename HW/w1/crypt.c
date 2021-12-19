/*
Числа шифруются по определенному алгоритму с двумя секретными числовыми ключами – A и B.
Число умножается на значение ключа A, затем к результату прибавляется значение ключа B.
Шифруемые числа и значения ключей не превышают по модулю 30000.
В ходе разведывательной операции стали известны зашифрованные эквиваленты двух чисел.
Необходимо найти подходящие ключи и расшифровать зашифрованную последовательность чисел.

Входные данные:
plain1 encrypted1
plain2 encrypted2
length
<последовательность length зашифрованных чисел>
Пример ввода

1 3
2 5
5
7 9 11 13 15

Пример вывода

3 4 5 6 7

Пояснение

В процессе шифрования числа умножали на A = 2, затем к результату добавляли B = 1.
1 * A + B = 3
2 * A + B = 5
crypt[i] = x[i] * 2 +  1
x[i] = (crypt[i]-1)/2
*/

#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length, initial, answer;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &initial);
        answer = (initial - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
        printf("%d ", answer);
    }
    scanf("%d", &initial);
    answer = (initial - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
    printf("%d\n", answer);
    
    return 0;
}





/*
#include <stdio.h>
int Key1(int plain1, int encrypted1, int plain2, int encrypted2) {
    int x;
    x = ((encrypted2 - encrypted1) / (plain2 - plain1));
    return x;
}
int Key2 (int plain1, int encrypted1, int plain2, int encrypted2) {
    int y;
    y = (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)));
    return y;
}

int main() {
    int plain1, encrypted1, plain2, encrypted2, length, answer, crypt;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);

    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &crypt);
        answer = (crypt - Key2(plain1, encrypted1, plain2, encrypted2)) / Key1(plain1, encrypted1, plain2, encrypted2);
        printf("%d ", answer);
    }
    scanf("%d", &crypt);

    answer = (crypt - Key2(plain1, encrypted1, plain2, encrypted2)) / Key1(plain1, encrypted1, plain2, encrypted2);
    printf("%d\n", answer);
    
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length, encrypt;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &encrypt);
        encrypt = (encrypt - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
        printf("%d ", encrypt);
    }
    scanf("%d", &encrypt);
    encrypt = (encrypt - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
    printf("%d\n", encrypt);
    
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length, encrypt;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &encrypt);
        encrypt = (encrypt - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
        printf("%d ", encrypt);
    }
    scanf("%d", &encrypt);
    encrypt = (encrypt - (encrypted1 - plain1 * ((encrypted2 - encrypted1) / (plain2 - plain1)))) / ((encrypted2 - encrypted1) / (plain2 - plain1));
    printf("%d\n", encrypt);
    
    return 0;
}
*/



/*
#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length;
    int crypt [length-1], encrypt[length-1];
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);

    for ( int i = 0; i < length; i++ ){
        
        scanf("%d", &crypt[i]);
        encrypt[i] = ( crypt[i] - 1 ) / 2;
    }
    for ( int i = 0; i < length - 1; i++ ) {
        printf("%d ", encrypt[i]);
    }
    printf("%d\n", encrypt[length-1]);
    
    return 0;
}
*/