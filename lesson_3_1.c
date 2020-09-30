#include    <unistd.h>
#include    <stdio.h>

int main(void)
{
    int age, weight;
    char name[50];

    printf("Пожалуйста введите ваше имя: ");
    scanf("%s", name);
    printf("Введите ваш возраст: ");
    scanf("%d", &age);
    printf("Введите ваш вес: ");
    scanf("%d", &weight);
    printf("Выведем нашу информацию:\n");
    printf("-----------------------------------------------------------------\n");
    printf("Ваше имя %s, ваш возраст %d, ваш вес %d кг.\n", name, age, weight);
    printf("-----------------------------------------------------------------\n");
    printf("Адрес переменной name с нашим именем в памяти компьютера - %p \n", &name);
    return (0);
}