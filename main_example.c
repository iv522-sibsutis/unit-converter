#include <stdio.h>
#include <math.h>
#include "unitcon.c"

int main() {
    int number, n = 0;
    char str1[20], str2[20], filename[20];
    printf("Ввод числа, исх. величины, величины перевода, название файла, размер матрицы\n");
    scanf("%d", &number);
    scanf("%s", &str1);
    scanf("%s", &str2);
    scanf("%s", &filename);
    scanf("%d", &n);
    printf("Check! : %d\n %s\n %s\n %s\n %d\n", number, str1, str2, filename, n);
    Result(number, str1, str2, n, filename);
    return 0;
}
