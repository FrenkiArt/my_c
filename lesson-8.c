#include <stdio.h>

int main(int argc, char *argv[])
{
    int two = 2;
    float a = 3 / (two + 0.0);
    printf("%1.1f\n", a);

    int three = 3;
    float b = (double)three;
    printf("%1.1f\n", b); 

    int four = 4;
    int maybe = 116;
    char letter = (char)maybe;
    printf("%c\n", letter);

    char let = 'A';
    int newnumb = (int)let;
    printf("%d\n", newnumb);
    return (0);
}