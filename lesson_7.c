#include <stdio.h>

static int  number = 500; // глобальная локальная переменная

int main(void)
{
    extern int number; // Используем глобальную статическую переменную
    printf("number = %d\n", number);
    extern int number2; // эта переменная будет находиться в другом файле
    printf("number2 = %d\n", number2);
    return (0);
}