#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Result(int number, char str1[], char str2[], char filename[]) {
    FILE *file;
    file = fopen(filename, "r");
    int i = 0, j = 0, ind1, ind2, n;
    char size[5];
    fscanf(file, "%s", size);
    n = atoi(size);
    float num, vel = 1;
    char Mas[n][n][20];
    for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++) {
	    fscanf(file, "%s", Mas[i][j]);
	}
    }
    for (i = 1; i < n; i++) {
	if (strcmp(str1, Mas[0][i]) == 0)
	    ind1 = i;
	if (strcmp(str2, Mas[0][i]) == 0)
	    ind2 = i;
    }
    if (ind1 < ind2) {
	while ((strcmp(str2, Mas[0][ind1])) != 0) {
	    vel = vel * atof(Mas[ind1][ind1+1]);
	    ind1 = ind1 + 1;
	}
        num = number / vel;
    }
    if (ind1 > ind2) {
	while ((strcmp(str1, Mas[0][ind2])) != 0) {
	    vel = vel * atof(Mas[ind2][ind2+1]);
	    ind2 = ind2 + 1;
	}
        num = number * vel;
    }
    printf("%f %s", num, str2);
    fclose(file);
    return 0;
}