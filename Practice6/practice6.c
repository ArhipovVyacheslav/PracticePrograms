// Імпортуєм модулі
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Створюєм функцію
int main() 
{
    // Створюєм змінні
    int x1, x2, y1, y2;

    // Вводим значення для змінних
    printf("Write 4 numbers (x1, y1, x2, y2): ");
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    int result = x2 - x1 + y2 - y1; // Формула для пошуку довжини вектора

    printf("Result is: %f\n", sqrt(result)); // Виводим результат
    system("pause"); // Для тих хто програмує на Sublime text
    return 0;
}
