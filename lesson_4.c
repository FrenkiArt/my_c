#include    <stdio.h>
#include    <unistd.h>
#include    <stdlib.h>

int main(void)
{
    // в общем урок был про экранированные спец символы
    printf("\a Прозвучит системный звонок, если есть в компе пищалка.");
    printf("Строка будет перевдена на\n следующую строку\n");
    return (0);
}