/* ������� � ���������� ��� ����� ����� - 
������ ����, ��� � ���������� ������ �������������� ����������. 
������� � ������ ����� ������ ����� �������� ����������.
���������� ���������� ������ ����. */

#include <stdio.h>

int main() {
    int number, step, count;
    
    scanf("%d %d %d", &number, &step, &count);
    
    for ( ; count > 1; count-- ) {
        printf("%d ", number);
        number = number + step; // number += step;
    }
    printf("%d\n", number);
    
    return 0;
}
