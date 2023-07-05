// Імпортуєм хедери
#include <stdio.h>
#include <stdlib.h>
// Створюємо константу
#define module 12345

// функція для підрахунку
void count(int n)
{
	// Створюємо змінні, де d0 - кількість яка закінчується нулем, а d1 - закінчується одиницею
	int d0 = 2;
	int d1 = 1;

	for(int i = 2; i <= n; i++)
	{
		// Послідновності довжиною i
		int nd0 = ((d0 + d1) % module);
		int nd1 = d0;
		d0 = nd0;
		d1 = nd1;
	}
	// Вивід
	printf("%d", (d0 + d1) % module);
}

int main(void)
{
	// Створюємо змінну n та записуємо значення для неї
	int n = 0;
	printf("Write n: ");
	scanf("%d", &n);

// Виводимо результат
	printf("Result is: ");
	count(n);
	printf("\n");
	system("pause"); // Для тих хто програмує на Sublime text
}