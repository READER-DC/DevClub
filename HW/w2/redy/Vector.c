/*
С помощью известных вам инструментов реализовать тип Vector (вектор на координатной плоскости) с координатами x, y типа double. Также реализовать следующие функции:

void vectorIncrement(Vector *this, Vector other)
void vectorDecrement(Vector *this, Vector other)
int vectorEqual(Vector a, Vector b) - cравнение векторов по координатам
Vector vectorSum(Vector a, Vector b)
Vector vectorDiff(Vector a, Vector b)
double vectorLen(Vector this) – нахождение длины вектора. Воспользоваться функцией hypot() из библиотеки math.h
1/8 tests passed
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    a.x = a.x + b.x;
    a.y = a.y + b.y;
    
    return a;
}

Vector vectorDiff(Vector a, Vector b) {
    a.x = a.x - b.x;
    a.y = a.y - b.y;
    
    return a;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}



int main() {
    int c;
    double l;

    Vector a;
    Vector b;
    Vector s;
    Vector d;

    a.x = 5;
    a.y = 5;
    b.x = 7;
    b.y = 7;
    vectorIncrement (&a, b);
    vectorDecrement (&b, a);
    c = vectorEqual(a, b);
    s = vectorSum(a, b);
    d = vectorDiff(a, b);
    l= vectorLen(d);



    vectorPrint (a);
    vectorPrint (b);
    printf("%d\n", c);
    vectorPrint(s);
    vectorPrint(d);
    printf("%g\n", l);
    

    
    return 0;
}
