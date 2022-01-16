/*
Кузнечик начинает свой путь на клетке 0 и может прыгать на расстояние от 1 до <maxJump> клеток. Прыжки возможны только на целое число клеток вперед.
Посчитать кол-во способов <ways>, которыми кузнечик может попасть на клетку <cell>.

В файле task.in заданы целые числа:
<maxJump> <cell>

Вывести ways в task.out.

Ограничения:
1 <= maxJump <= 100
1 <= cell <= 100
1 <= ways <= 999 999 999 999 999 999

Пояснение

Кузнечик может прыгать на 1 или 2 клетки.
На 1-ю клетку он может попасть одним способом: 0->1.
На 2-ю клетку он может попасть двумя способами: 0->2, 0->1->2.
На 3-ю клетку можно попасть тремя способами: 0->1->2->3, 0->1->3, 0->2->3.
code works
*/

#include <stdio.h>

#define LIMIT 100

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    int cell;
    int maxJump;
    unsigned long long ways[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &maxJump, &cell);
    
    if ( maxJump > cell ) {
        maxJump = cell;
    }
    arrayZeroFill(ways, cell);
    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }
    
    for ( int i = maxJump, k = 0; i < cell; i++ ) {
        for ( int j = 1; j <= maxJump; j++ ) {
            k = i - j;
            ways[i] += ways[k];
        }
    }
    fprintf(out, "%llu\n", ways[cell-1]);
    return 0;
}

/* review fail - Программу нужно укоротить. Лишние строки: 5.
#include <stdio.h>

#define LIMIT 100

void arrayZeroFill(unsigned long long int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}
void arrayPrint(FILE *out, unsigned long long int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "a[%d] %llu\n",i, array[i]);
    }
    fprintf(out, "a[%d] %llu\n",last , array[last]);
}

int main() {
    int cell;
    int maxJump;
    unsigned long long ways[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &maxJump, &cell);

    if ( maxJump > cell ) {
        maxJump = cell;
    }
    arrayZeroFill(ways, cell);
    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }
    
    for ( int i = maxJump, k = 0; i < cell; i++ ) {
        for ( int j = 1; j <= maxJump; j++ ) {
            k = i - j;
            ways[i] += ways[k];
        }
    }
    arrayPrint(out, ways, cell);
    fprintf(out, "%llu\n", ways[cell-1]);
    fclose(out);
    
    return 0;
}
*/


/* 9/20 tests passed
#include <stdio.h>
#define LIMIT 100

void arrayZeroFill(unsigned long long array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}
void arrayPrint(FILE *out, unsigned long long array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%llu\n ", array[i]);
    }
    fprintf(out, "%llu\n", array[last]);
}

int main() {
    int cell;
    int maxJump;
    
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf( in,"%d", &maxJump);
    fscanf( in, "%d", &cell);

    unsigned long long ways[LIMIT];

    arrayZeroFill(ways,LIMIT);
    if ( maxJump > cell ) {
        maxJump = cell;
    }
    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }

    for ( int i = maxJump; i < cell; i++ ) {
        for (int j = 1; j < maxJump; j++) {
            ways[i] += ways[i-j];
        }
    }
    arrayPrint(out, ways, cell);
    fprintf(out, "%llu\n", ways[cell-1]);
    fclose(out);

    return 0;
}
*/
