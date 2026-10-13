#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int X, Y;

    printf("Введите два числа X и Y: ");
    scanf("%d %d", &X, &Y);

    if (X < Y)
    {
        printf("%d<%d\n", X, Y);
    }
    else if (X == Y)
    {
        printf("%d=%d\n", X, Y);
    }
    else
    {
        printf("%d>%d\n", X, Y);
    }

    return 0;
}
