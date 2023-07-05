// Імпортуєм модулі
#include <stdio.h>
#include <stdlib.h>

// Функція для пошуку дільників числа m
int result(int m)
{
    int count = 0;

    // Умова щоб m був більше за 1 але меньше ніж 150
    if (m < 1 || m > 150)
        return 0;

    // Порівнюємо за формулою для пошуку дільників
    for(int i = 1; i <= m; i++)
    {
        if(m % i == m / i)
        {
            count++; // Підраховуємо кількість дільників
        }
    }
    return count;
}

int main()
{
    // Створюємо змінні
    int m;
    int res = 0;
    // Записуємо число
    printf("Write a m numbers: ");
    scanf("%d", &m);

    // Розраховуємо
    res = result(m);
    // Виводимо
    printf("\nResult is: %d\n", res);
    system("Pause"); // Для тих хто програмує на Sublime text
    return 0;
}
