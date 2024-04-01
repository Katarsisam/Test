

#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, S, P;
    double d;
    scanf_s("%d %d", &a, &b);
    if (a >= 0 || b >= 0) {
        P = (a + b) * 2;
        S = a * b;
        d = sqrt(pow(a, 2) * pow(b, 2));
        printf("Площадь: %d, Периметр: %d, Диагональ: %.2lf", S, P, d);
    }
    else
        printf("Try again");
}


