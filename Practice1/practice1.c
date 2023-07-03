// Інклудим модулі
#include <stdio.h>
#include <stdlib.h>

// Створюємо функцію main
int main() {
// Створюємо змінні
    int t1, t2, t3;
// Вводимо значення    
    printf("Write 3 arguments: ");
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
// Присвоюємо змінній time будь яку (t1/t2/t3) змінну
    float time = t1;
    
// Якщо змінна t2 більше за time, то time присвоюється t2, якщо ні, то продовжуєм программу
    if (t2 > time) 
    {
        time = t2;
    }
    
// Якщо змінна t3 більше за time, то time присвоюється t3, якщо ні, то продовжуєм программу
    if (t3 > time) 
    {
        time = t3;
    }

    time = time / 3.0;
// Вихід time
    printf("Time is %.2f hours\n", time); // .2f - округлення до 2 знаків після крапки
// Пауза перед закриттям програми (для тих хто редактує на sublime text)
    system("pause");
    return 0;
}
