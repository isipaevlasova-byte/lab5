/*
Студент: Зимовец Юлия Алексадровна
Группа: ПИ 1-1
Назначение: "Конвертер велечин"
*/
#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;          
    long long sum = 0;      
    int positives = 0;      
    while (count < 100) {
        printf("Enter number (-1000..1000, 0 to stop): ");
        if (scanf("%d", &n) != 1) {
            printf("Input error\n");
            break; 
        }
        if (n == 0) {
            break;
        }
        if (n < -1000 || n > 1000) {
            printf("Range error\n");
            continue;      
        }
        count++;
        sum += n;
        if (n > 0) {
            positives++;
        }
        if (count == 100) {
            break;          
        }
    }
    printf("Count = %d\n", count);
    printf("Sum = %lld\n", sum);
    printf("Positives = %d\n", positives);

    return 0;
}