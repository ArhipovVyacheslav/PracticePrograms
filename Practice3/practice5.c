#include <stdio.h>
#include <stdlib.h>

// Рекурсивна функція, r - розряд, pd та ppd - попередня та перед-попередня цифра
int counting(int r, int pd, int ppd) 
{
    if (r == 0)
    {
        return 1;
    }
    int c = 0; // Для кількості чисел
    
    for (int digit = 5; digit <= 9; digit += 4) 
    {
        if (digit == pd && digit == ppd) // Перевірка на однаковість цифр
        {
            continue;
        }
        c += counting(r - 1, digit, pd); // Виклик рекурсії та плюсування результату
    }
    return c;
}

int main() 
{
    int r;
    printf("Write num: ");
    scanf("%d", &r);
    
    int result = counting(r, 0, 0); // Заносим результати рекурсії та виводимо їх
    
    printf("Result from %d is: %d\n", r, result);
    system("pause"); // Для тих хто програмує на Sublime text
    return 0;
}
