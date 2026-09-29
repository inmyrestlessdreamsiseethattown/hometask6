#include <stdio.h>
int main()
{
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
