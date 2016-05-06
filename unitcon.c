#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int schr(char s[], char c) {
    int i, num = -1;
    for(i=0; (s[i] != '\0') && (s[i] != c); i++);
        if (s[i] == c)
            num = i;
    return num;
}

int stok(char str[], char delim, char *ptr[]) {
    char *suf = str;
    ptr[0] = str;
    int i, j = 1;
    while( ( i = schr(suf, delim) ) >= 0 ) {
         suf[i] = '\0';
         suf = suf + i + 1;
         ptr[j] = suf;
         j++;
    }
    return j;
}

int file_name(char volume[], char name_file[], int *n) {
	if ((strcmp(volume,"nm")==0) || (strcmp(volume,"mm")==0) || (strcmp(volume,"cm")==0) || (strcmp(volume,"dm")==0) || (strcmp(volume,"m")==0) || (strcmp(volume,"km")==0)) {
		strcpy(name_file,"Long.txt");
		*n = 7;
		}
	if ((strcmp(volume,"m/s")==0) || (strcmp(volume,"km/s")==0) || (strcmp(volume,"km/h")==0)) {
		strcpy(name_file,"Speed.txt");
		*n = 4;
		}
	if ((strcmp(volume,"mm2")==0) || (strcmp(volume,"cm2")==0) || (strcmp(volume,"dm2")==0) || (strcmp(volume,"m2")==0) || (strcmp(volume,"ha")==0)) {
		strcpy(name_file,"Square.txt");
		*n = 6;
		}
	if ((strcmp(volume,"sec")==0) || (strcmp(volume,"min")==0) || (strcmp(volume,"hour")==0) || (strcmp(volume,"day")==0) || (strcmp(volume,"week")==0) || (strcmp(volume,"month")==0) || (strcmp(volume,"year")==0)) {
		strcpy(name_file,"Time.txt");
		*n = 8;
		} 
	if ((strcmp(volume,"mkl")==0) || (strcmp(volume,"ml")==0) || (strcmp(volume,"l")==0) || (strcmp(volume,"m3")==0)) {
		strcpy(name_file,"Volume.txt");
		*n = 5;
		}
	if ((strcmp(volume,"mkg")==0) || (strcmp(volume,"mg")==0) || (strcmp(volume,"g")==0) || (strcmp(volume,"kg")==0) || (strcmp(volume,"cwt")==0) || (strcmp(volume,"t")==0)) {
		strcpy(name_file,"Weight.txt");
		*n = 7;
		}
}

int main(int argc, char *argv[]) {
    int n = 0;
    if ((argv[1] == NULL) || (argv[2] == NULL) || (argv[3] == NULL)) {
	printf("Неправильный ввод значений (./unitcon <число> <величина 1> <величина 2>)");
	return 0;
    }
    FILE *file;
    char name_file[20];
    file_name(argv[2], name_file, &n);
    file = fopen(name_file, "r");
    int i = 0, j = 0, ind1, ind2;
    float num, vel = 1;
    char Mas[n][n][20];
    for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++) {
	    fscanf(file, "%s", Mas[i][j]);
	}
    }
    for (i = 1; i < n; i++) {
	if (strcmp(argv[2], Mas[0][i]) == 0)
	    ind1 = i;
	if (strcmp(argv[3], Mas[0][i]) == 0)
	    ind2 = i;
    }
    if (ind1 < ind2) {
	while ((strcmp(argv[3], Mas[0][ind1])) != 0) {
	    vel = vel * atof(Mas[ind1][ind1+1]);
	    ind1 = ind1 + 1;
	}
        num = (atoi(argv[1])) / vel;
    }
    if (ind1 > ind2) {
	while ((strcmp(argv[2], Mas[0][ind2])) != 0) {
	    vel = vel * atof(Mas[ind2][ind2+1]);
	    ind2 = ind2 + 1;
	}
        num = (atoi(argv[1])) * vel;
    }
    printf("%f %s", num, argv[3]);
    fclose(file);
    return 0;
}