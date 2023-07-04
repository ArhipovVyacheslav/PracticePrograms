#include <stdio.h>
#include <stdlib.h>
// Знаходження (НСД)
int gcd(int a, int b) 
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b); // Викликаємо функцію саму на себе для зменшення числа, поки b не буде дорівнювати 0, тоді повертаемо число A як нсд
}

// Знаходження (НСК)
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b); // формула для пошуку НСК
}

// Розраховуємо НСК для чисел більше ніж 2 при вписанні в консоль
int numbers(int *arr, int n)
{
    int result = arr[0];

    for (int i = 1; i < n; i++) 
    {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main(void) 
{
    int n;
    
    // Вводимо кількість чисел для пошуку їхнього НСК
    printf("Write number: ");
    scanf("%d", &n);
    
    int array[n];
    
    // Вписуємо самі числа
    printf("Write numbers: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    
    // Присвоюємо результат функції
    int result = numbers(array, n);
    
    // Виводимо результат
    printf("NSK: %d\n", result);

    // Пауза під час виконання (так як програмую на sublime text)
    system("pause");
}


