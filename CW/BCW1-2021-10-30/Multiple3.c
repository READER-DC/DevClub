/*������� � ���������� ����� ������������� �����.
������� � ������ ��� �����, ������� 3, �� ���� �� ���������� ����� ������������.*/

#include <stdio.h>

int main() {
    int number, last;

    scanf("%d", &number);
    
    last = number - number % 3;

    /* i, j, k, l */
    for ( int i = 0; i < last; i += 3 ) {
        printf("%d_", i);
    }
    printf("%d\n", last);
    
    return 0;
}
