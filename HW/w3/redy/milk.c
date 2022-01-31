/*
Условие задачи

Молочная компания каждый день покупает молоко у фермеров. У каждого из <farmerQuantity> фермеров есть <amount> литров молока по цене <price>. Найти минимальную стоимость <minPrice>, за которую возможно приобрести <amountNeeded> литров молока. В случае, если у фермеров недостаточно молока, вывести в качестве <minPrice> значение 0.

В файле task.in заданы целые числа:
<farmerQuantity> <amountNeeded>
<amount1> <price1>
<amount2> <price2>
.....
<amountN> <priceN>

Вывести minPrice в task.out.

Ограничения:
0 <= farmerQuantity <= 100 000 000
0 <= amountNeeded <= 300 000 000
0 <= amount <= 300 000 000
1 <= price <= 1 000
Пример ввода

3 10
5 1
8 2
8 3

Пример вывода

15
code works
*/

#include <stdio.h>

#define LENGHT 1001

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long farmerQuantity;
    unsigned long long amountNeeded;
    unsigned long long minPrice = 0;
    unsigned long long amount;
    unsigned long long amountBuy = 0;
    int price;
    unsigned long long amountResult[LENGHT];
    
    fscanf(in, "%llu %llu", &farmerQuantity, &amountNeeded);
    arrayZeroFill(amountResult, LENGHT);
    if ( farmerQuantity != 0 && amountNeeded != 0 ) {
        for ( ; fscanf(in, "%llu", &amount) == 1; ) {
            fscanf(in, "%d", &price);
            amountResult[price] += amount;
        }
        
        for ( int i = 1; i < LENGHT && amountNeeded >= amountBuy; i++ ) {
            price = i;
            amountBuy += amountResult[i];
            if ( amountBuy <= amountNeeded ) {
                minPrice = minPrice + i * amountResult[i];
            } else {
                minPrice = minPrice + (amountResult[i] - (amountBuy - amountNeeded)) * price;
            }
        }
        if ( amountBuy < amountNeeded ) {
            minPrice = 0;
        }
    }
    fprintf(out, "%llu\n", minPrice);
    fclose(in);
    fclose(out);
    
    return 0;
}

/*

#include <stdio.h>

#define LENGHT 1001

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long farmerQuantity;
    unsigned long long amountNeeded;
    unsigned long long minPrice = 0;
    unsigned long long amount;
    unsigned long long amountBuy = 0;
    int price;
    unsigned long long amountResult[LENGHT];
    
    fscanf(in, "%llu", &farmerQuantity);
    fscanf(in, "%llu", &amountNeeded);
    arrayZeroFill(amountResult, LENGHT);

    if ( farmerQuantity != 0 && amountNeeded != 0 ) {

        for ( ;fscanf(in, "%llu", &amount) == 1; ) {
            fscanf(in, "%d", &price);
            amountResult[price] += amount;
        }

        for ( int i = 1; i < LENGHT && amountNeeded >= amountBuy; i++ ) {
            price = i;
            amountBuy += amountResult[i];
            if ( amountBuy <= amountNeeded ) {
                minPrice = minPrice + i * amountResult[i];
            } else {
                minPrice = minPrice + (amountResult[i]-(amountBuy-amountNeeded))*price;
            }
        }
        if ( amountBuy < amountNeeded ) {
            minPrice = 0;
        }
        // else {
        //     printf("minPrice = %llu\n", minPrice);
        //     printf("amountBuy - amountNeeded = %llu\n", amountBuy - amountNeeded);
        //     minPrice = minPrice - ( amountBuy - amountNeeded) * price;
        //     printf("minPrice = %llu amountBuy = %llu price = %d\n", minPrice, amountBuy, price);
        // }
    }
    fprintf(out, "%llu\n", minPrice);
    fclose(in);
    fclose(out);
    
    return 0;
}
*/


/* 2/9 tests passed
#include <stdio.h>

#define LENGHT 1000

void arrayZeroFill(unsigned long long array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long farmerQuantity;
    unsigned long long amountNeeded;
    unsigned long long minPrice = 0;
    unsigned long long amount;
    unsigned long long answear = 0;
    int price;
    unsigned long long amountResult[LENGHT];
    
    fscanf(in, "%llu %llu", &farmerQuantity, &amountNeeded);
    arrayZeroFill(amountResult, LENGHT);
    
    for ( ; fscanf(in, "%llu %d", &amount, &price) == 1; ) {
        for ( int j = 1; j < LENGHT; j++ ) {
            if ( price == j ) {
                amountResult[j] += amount;
            }
        }
    }
    for ( int i = 1; i < LENGHT && answear < amountNeeded; i++ ) {
        minPrice = minPrice + i * amountResult[i];
        answear = answear + amountResult[i];
        price = i;
    }
    if ( answear < amountNeeded ) {
        minPrice = 0;
    } else {
        minPrice = minPrice - (answear - amountNeeded) * price;
    }
    fprintf(out, "%llu\n", minPrice);
    fclose(in);
    fclose(out);
    
    return 0;
}

*/
