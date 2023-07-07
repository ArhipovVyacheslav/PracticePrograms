#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Функція для обчислення факторіалу числа
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}

// Функція для обчислення кількості анаграм
int countA(char *word) 
{
    int len = strlen(word);
    
    // Обчислюємо кількість анаграм за формулою n! / (a! * b! * c! * ...)
    int numAnagrams = factorial(len);
    
    // Обчислюємо кількість повторень кожної букви
    int count[26] = {0}; // Масив для збереження кількості кожної букви
    for (int i = 0; i < len; i++) 
    {
        count[word[i] - 'A']++;
    }
    
    // Ділимо загальну кількість анаграм на факторіали кількостей повторень кожної букви
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] > 1) {
            numAnagrams /= factorial(count[i]);
        }
    }
    
    return numAnagrams;
}

int main() 
{
    char word[15];
    
    // Введення слова
    printf("Write word: ");
    scanf("%s", word);
    
    // Обчислення кількості анаграм
    int numA = countA(word);
    
    // Виведення результату
    printf("Num of anogram: %d\n", numA);
    
    system("pause");
    return 0;
}