#include <stdio.h>
#include <math.h>
#include "unitcon.c"

int main() {
    int number;
    char str1[20], str2[20], filename[20];
    printf("Ввод числа, исх. величины, величины перевода, название файла\n");
    scanf("%d", &number);
    scanf("%s", &str1);
    scanf("%s", &str2);
    scanf("%s", &filename);
    printf("Check! : %d\n %s\n %s\n %s\n", number, str1, str2, filename);
    Result(number, str1, str2, filename);
    return 0;
}
