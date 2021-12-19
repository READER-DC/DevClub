/*
С помощью известных вам инструментов реализовать тип Point (точка на координатной плоскости) с координатами x, y типа double.
Также реализовать следующие функции:

void pointPrint(Point a) - печать точки в виде (x, y). Воспользоваться шаблоном %g. Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3)
int pointEqual(Point a, Point b) - сравнение двух точек по координатам (равны или не равны).
double pointDistance(Point a, Point b) - нахождение расстояния между двумя точками. Воспользоваться функцией hypot() из библиотеки math.h

almost win

*/



#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}

/* Пиздец!!!  Предусмотрел! :)
Программу нужно укоротить. Лишние строки: 7.
void pointPrint(Point a) - печать точки в виде (x, y). Воспользоваться шаблоном %g. Предусмотреть возможность печати вида (5, 7.8) not equal to (13.9, 25.3)

#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

void pointPrintEqual(Point a, Point b) {
    if ( pointEqual(a, b) == 1 ) {
        printf("(%g, %g) equal to (%g, %g)", a.x, a.y, b.x, b.y);
    } else {
        printf("(%g, %g) not equal to (%g, %g)", a.x, a.y, b.x, b.y);
    }
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}






int main() {
    
    Point a;
    Point b;
    Point c;
    a.x = 5;
    a.y = 7.8;
    b.x = 13.9;
    b.y = 25.3;
    printf("(%g, %g)\n", a.x, a.y);

    pointPrint(a);
    if( pointEqual(a, b) == 1 ) {
        printf("(%g, %g) equal to (%g, %g)\n", a.x, a.y, b.x, b.y);
    } else {
        printf("(%g, %g) not equal to (%g, %g)\n", a.x, a.y, b.x, b.y);
    }
    printf("%d", pointDistance(b, a));
    return 0;
}
*/
