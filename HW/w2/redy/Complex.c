/*
Условие задачи

С помощью известных вам инструментов реализовать тип Complex для хранения комплексных чисел.

Теория:
Комплексное число задается формулой a + bi, где a и b - вещественные числа, i = sqrt(-1) (мнимая единица); a называют действительной частью (принято обозначать re), b называют мнимой частью (принято обозначать im).

Действия над комплексными числами:
* Сравнение: a + bi = c + di означает, что a = c и b = d (два комплексных числа равны между собой тогда и только тогда, когда равны их действительные и мнимые части).
* Сложение: (a + bi) + (c + di) = (a + c) + (b + d)i
* Вычитание: (a + bi) - (c + di) = (a - c) + (b - d)i
* Умножение: (a + bi)*(c + di) = ...

Модуль комплексного числа вычисляется как квадратный корень из суммы квадратов его действительной и мнимой частей.

void complexIncrement(Complex *this, Complex other)
void complexDecrement(Complex *this, Complex other)
void complexMultiply(Complex *this, Complex other)
Complex complexSum(Complex a, Complex b)
Complex complexDiff(Complex a, Complex b)
Complex complexProduct(Complex a, Complex b)
int complexEqual(Complex a, Complex b)
double complexAbs(Complex this) - нахождение модуля комплексного числа. Воспользоваться функцией hypot() из библиотеки math.h
void complexPrint(Complex this) - печать комплексного числа в виде a+bi. Воспользоваться шаблоном %g. Проследить за знаком мнимой части. Обеспечить возможность вывода вида 3+7i is not equal to 4+2i.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    Complex c;
    
    c.re = this->re;
    c.im = this->im;
    
    this->re = c.re * other.re - c.im * other.im;
    this->im = c.re * other.im + c.im * other.re;
}

Complex complexSum(Complex a, Complex b) {
    Complex c;
    
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

Complex complexDiff(Complex a, Complex b) {
    Complex c;
    
    c.re = (a.re - b.re);
    c.im = (a.im - b.im);
    return c;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c;
    
    c.re = a.re * other.re - c.im * other.im;
    c.im = a.re * other.im + a.im * other.re;
    return c;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    char z = '+';
    
    if ( this.im < 0 ) {
        z = '-';
        this.im *= -1;
    }
    printf("%g%c%gi", this.re, z, this.im);
}


int main() {

    Complex x;
    Complex y;
    Complex c;
    int result;

    
    x.re = 2; 
    x.im = 2;
    y.re = 2;
    y.im = 2;

    complexPrint (x);
    complexPrint (y);

    complexIncrement(&x, y);
    printf("complexIncrement\n");
    complexPrint (x);

    printf("complexDecrement\n");
    complexDecrement(&x, y);
    complexPrint (x);

    printf("complexMultiply\n");
    complexMultiply(&x, y);
    complexPrint (x);

    printf("complexSum\n");
    c = complexSum(x, y);
    complexPrint(c);

    printf("complexDiff\n");
    c = complexDiff(x, y);
    complexPrint(c);

    printf("complexEqual\n");
    printf("%d\n", complexEqual(x, y));


    return 0;
}

/*
#include <stdio.h>

int main() {
    int dec, base, numOfPower, power, answer, j;
    j = 1;
    
    power = 0;
    
    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( int i = 1; i < dec ; i *= base ) {
        power = power + 1; // макс степень 
        numOfPower = i; // макс число от base в степени
    }
    for ( int i = 0; i < power; i++ ) {
        answer = dec / numOfPower;
        
        dec = dec % numOfPower;
        if ( answer > 9 ) {
            answer -= 10;
            printf("%c", answer+'A');
        } else {
            printf("%d", answer);
        }
        numOfPower = numOfPower / base;
    }
    printf("\n");
    
    return 0;
}
*/




/*
#include <stdio.h>

int main() {
    int dec, base, numOfPower, power, answer;
    
    power = 0;
    numOfPower = 0;
    
    scanf("%d %d", &dec, &base);
    if ( dec < 0 ) {
        dec *= -1;
        printf("-");
    }
    for ( int i = 1; i <= dec; i *= base ) {
        power = power + 1; // макс степень 
        numOfPower = i; // макс число от base в степени
        printf("макс число от base в степени %d\n", numOfPower);
    }
    printf("макс число от base в степени %d\n", dec/base * base);
    for ( int i = 0; i < power; i++ ) {
        answer = dec / numOfPower;
        if ( answer > 9 ) {
            answer -= 10;
            printf("%c", answer+'A');
        } else {
            printf("%d", answer);
        }
        dec = dec % numOfPower;
        numOfPower = numOfPower / base;
    }
    printf("\n");
    
    return 0;
}
*/
