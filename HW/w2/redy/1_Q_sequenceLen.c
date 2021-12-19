/*
Считать из файла task.in последовательность чисел размером не более 100 элементов.
Посчитать длину последовательности и вывести ее в task.out.
Пример ввода

10 20 30 40 50 60 70 80 90 100

Пример вывода

10
*/


#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int element;
    int size = 99;
    int counter = 0;
    int a[size];
    
    for ( int i = 0; fscanf(in, "%d", &element) == 1 && i <= size; i++ ) {
        counter += 1;
        a[i] = element;
        // if ( a[i] == a[i-1] ) {
        //     i = 100;
        // }
    }
    fprintf(out, "%d\n", counter);
    
    return 0;
}


/*
почему такой цикл доходит до последнего числа и молотит его бесконечно ? 

for ( int i = 0; fscanf(in, "%d", &element) == 1 && i <= size; i++ ) {
        counter += 1;
        
    }


*/