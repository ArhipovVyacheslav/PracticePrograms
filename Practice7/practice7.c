#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    int d;
    
    // Введення координат і радіусів
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    
    printf("Enter coordinates and radius of the second circle (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);
    
    // Обчислення відстані між центрами колів
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Перевірка умов перетину
    if (d > r1 + r2) 
    {
        printf("Circles do not intersect\n");
        system("pause");
        return 0;
    }
    
    if (d < abs(r1 - r2)) 
    {
        printf("One circle lies inside another\n");
        system("pause");
        return 0;
    }
    
    if (d == 0 && r1 == r2) 
    {
        printf("Circles match\n");
        system("pause");
        return 0;
    }
    
    // Обчислення кількості точок перетину
    if (d == r1 + r2 || d == abs(r1 - r2)) 
    {
        printf("1\n");
        system("pause");
        return 0;
    }
    
    if (d < r1 + r2 && d > abs(r1 - r2)) 
    {
        printf("2\n");
        system("pause");
        return 0;
    }
    
    printf("Circles have multiple intersection points\\n");
    system("pause"); // Для тих хто програмує на sublime text
    return 0;
}