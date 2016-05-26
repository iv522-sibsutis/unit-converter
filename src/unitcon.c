#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "unitcon.h"

double Result (float number, char str1[], char str2[], char filename[]) {
    int n; 
    char *filename1, *filename2, *filename3, *filename4, *filename5, *filename6;
	FILE *file;
    file = fopen(filename, "r");
    filename1="Long.txt"; filename2="Speed.txt"; filename3="Square.txt"; filename4="Time.txt"; filename5="Volume.txt"; filename6="Weight.txt";
    if (strcmp(filename,filename1)==0) n=7;
    if (strcmp(filename,filename2)==0) n=4; 
    if (strcmp(filename,filename3)==0) n=6;
    if (strcmp(filename,filename4)==0) n=8;
    if (strcmp(filename,filename5)==0) n=5;
    if (strcmp(filename,filename6)==0) n=7;
    int i = 0, j = 0, ind1 = -1, ind2 = -1;
    double num;
	double vel = 1;
    char Mas[n][n][20];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            fscanf (file, "%s", Mas[i][j]);
        }
    }
    for (i = 1; i < n; i++) {
        if (strcmp (str1, Mas[0][i]) == 0)
            ind1 = i;
        if (strcmp (str2, Mas[0][i]) == 0)
            ind2 = i;
    }
    if (((ind1 == -1) || (ind2 == -1)) && (strcmp(str1,str2) != 0)) {
        printf ("Ошибка ввода (%s и %s - разные виды величин)\n\n", str1, str2);
        return 0;
    }
	if (strcmp(str1,str2) == 0) {
		num = number;
	}
    if (ind1 < ind2) {
        while ( (strcmp(str2, Mas[0][ind1]) ) != 0) {
            vel = vel * atof (Mas[ind1][ind1+1]);
            ind1 = ind1 + 1;
        }
        num = (double)number / vel;
    }
    if (ind1 > ind2) {
        while ( (strcmp(str1, Mas[0][ind2]) ) != 0) {
            vel = vel * atof(Mas[ind2][ind2+1]);
            ind2 = ind2 + 1;
        }
        num = number * vel;
    }
    printf ("%f %s\n\n", num, str2);
    fclose (file);
    return num;
}
