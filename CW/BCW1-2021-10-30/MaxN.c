/* ������� � ���������� ����� ������������� ����� - 
���������� ����� � ������������������.
����� ������� � ���������� �������� ���������� ����� � 
������� ���������� �� ���. */

/* 5
1 2 3 4 5 */

#include <stdio.h>

int main() {
    int size, max, number;

    scanf("%d %d", &size, &max);

    for ( ; size > 1; size-- ) {
        scanf("%d", &number);

        printf("size: %d     number: %d     max: %d\n", size, number, max);

        if ( number > max ) {
            max = number;
        }
    }

    printf("%d\n", max);
    
    return 0;
}
