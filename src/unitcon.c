#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include "unitcon.h"

int process() {
	float fn=0;
    float number;
	long int w=0;
    char str1[20], str2[20], *filename;
	printf ("    ║╔ ╔╗ ║║ ╦╗ ╔═ ╔╗ ╦ ╔═ ╔╗\n    ╠╣ ║║ ╠╣ ╠╣ ╠═ ║║ ║ ╠═ ║║\n    ║╚ ╚╝ ║║ ╩╝ ╚═ ╠╝ ║ ╚═ ╠╝\n\n       ╦╗ ╔═ ╔╗ ║║ ║║ ║║ ║║\n       ╠╣ ╠═ ║║ ║║ ║║ ║║ ╠╣\n       ╩╝ ╚═ ╝║ ╚╝ ╚╣ ╚╝ ║║\n\n"); 
    printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit),  чтобы  узнать\nподробнее  о  приложении  введите \n- 3(about): ");
    scanf ("%ld", &w);
    printf ("\n");
    while (w!=2) {
        if (w==3) {
            printf ("Конвертер  величин  -  приложение,\nкоторое переводит  одну  величину\nв другую. Приложение  работает со\nследующими величинами:\n1) Длина,  растояние ( nm, mm, cm,\ndm, m, km)\n2) Скорость (m/s, km/s, km/h)\n3) Площадь(mm2, cm2, dm2, m2, ha)\n4) Время  (sec,  min,  hour,  day,\nweek, month, year)\n5) Объем (mkl, ml, l, m3)\n6) Вес (mkg, mg, g, kg, cwt, t)\n\n");
            printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit): ");
            scanf ("%ld", &w);
            printf ("\n");            
        }
        if (w==1){
            printf("Какую  величину вы хотите перевести\n(1- Длина,  растояние;  2-Скорость; \n3-Площадь; 4-Время; 5-Объем; 6-Вес)\nВведите число соответствующее вели-\nчине: ");
            scanf("%f", &fn);
            printf("Из чего перевести: ");
            scanf("%s", str1);
            printf("Во что  перевести: ");
            scanf("%s", str2);
            printf("Число: ");
            scanf("%f", &number);
            printf ("\n");
            int a;
            a=fn;
            fn=a;
            //Check
            if ((fn!=1)&&(fn!=2)&&(fn!=3)&&(fn!=4)&&(fn!=5)&&(fn!=6)){
				strcpy(conclusion,"\n  Не правильно введена величина!\n\n");
                printf ("\n  Не правильно введена величина!\n\n");
                fn=0;
                w=0;
            } else w=123;  
            if (fn==1) filename="Long.txt";
            if (fn==2) filename="Speed.txt";
            if (fn==3) filename="Square.txt";
            if (fn==4) filename="Time.txt";
            if (fn==5) filename="Volume.txt"; 
            if (fn==6) filename="Weight.txt";
            char *nm, *mm, *cm, *dm, *m, *km, *ms, *kms, *kmh, *mm2, *cm2, *dm2, *m2, *ha, *sec,  *min,  *hour,  *day, *week, *month, *year, *mkl, *ml, *l, *m3, *mkg, *mg, *g, *kg, *cwt, *t;
            nm="nm"; mm="mm"; cm="cm"; dm="dm"; m="m"; km="km"; ms="m/s"; kms="km/s"; kmh="km/h"; mm2="mm2"; cm2="cm2"; dm2="dm2"; m2="m2"; ha="ha"; sec="sec"; min="min"; hour="hour"; day="day"; week="week"; month="month"; year="year"; mkl="mkl"; ml="ml"; l="l"; m3="m3"; mkg="mkg"; mg="mg"; g="g"; kg="kg"; cwt="cwt"; t="t";
            if ((fn==1) && ((strcmp(str1,nm)==0)||(strcmp(str1,mm)==0)||(strcmp(str1,cm)==0)||(strcmp(str1,dm)==0)||(strcmp(str1,m)==0)||(strcmp(str1,km)==0)) && ((strcmp(str2,nm)==0)||(strcmp(str2,mm)==0)||(strcmp(str2,cm)==0)||(strcmp(str2,dm)==0)||(strcmp(str2,m)==0)||(strcmp(str2,km)==0))) w=123; 
            else if ((fn==2) && ((strcmp(str1,ms)==0)||(strcmp(str1,kms)==0)||(strcmp(str1,kmh)==0)) && ((strcmp(str2,ms)==0)||(strcmp(str2,kms)==0)||(strcmp(str2,kmh)==0))) w=123; 
                else if ((fn==3) && ((strcmp(str1,mm2)==0)||(strcmp(str1,cm2)==0)||(strcmp(str1,dm2)==0)||(strcmp(str1,m2)==0)||(strcmp(str1,ha)==0)) && ((strcmp(str2,mm2)==0)||(strcmp(str2,cm2)==0)||(strcmp(str2,dm2)==0)||(strcmp(str2,m2)==0)||(strcmp(str2,ha)==0))) w=123; 
                    else if ((fn==4) && ((strcmp(str1,sec)==0)||(strcmp(str1,min)==0)||(strcmp(str1,hour)==0)||(strcmp(str1,day)==0)||(strcmp(str1,week)==0)||(strcmp(str1,month)==0)||(strcmp(str1,year)==0)) && ((strcmp(str2,sec)==0)||(strcmp(str2,min)==0)||(strcmp(str2,hour)==0)||(strcmp(str2,day)==0)||(strcmp(str2,week)==0)||(strcmp(str2,month)==0)||(strcmp(str2,year)==0))) w=123; 
                        else if ((fn==5) && ((strcmp(str1,mkl)==0)||(strcmp(str1,ml)==0)||(strcmp(str1,l)==0)||(strcmp(str1,m3)==0)) && ((strcmp(str2,mkl)==0)||(strcmp(str2,ml)==0)||(strcmp(str2,l)==0)||(strcmp(str2,m3)==0))) w=123; 
                            else if ((fn==6) && ((strcmp(str1,mkg)==0)||(strcmp(str1,mg)==0)||(strcmp(str1,g)==0)||(strcmp(str1,kg)==0)||(strcmp(str1,cwt)==0)||(strcmp(str1,t)==0)) && ((strcmp(str2,mkg)==0)||(strcmp(str2,mg)==0)||(strcmp(str2,g)==0)||(strcmp(str2,kg)==0)||(strcmp(str2,cwt)==0)||(strcmp(str2,t)==0))) w=123; else w=321;      

            if (w==321) {
			printf ("Единицы измерениия не соответствуют \n       выбранной величине!\n\n");
				strcpy(conclusion,"Единицы измерениия не соответствуют \n       выбранной величине!\n\n");
            if (w==123)  Result( number, str1, str2, filename);//unitcon.		
	    printf ("Для продолжения введите- 1(start), \nчтобы  завершить  работу c прило-\nжением введите - 2(quit): ");
            scanf ("%ld", &w);
            printf ("\n");          
        }
        if ((w>=-1000000)&&(w<=1000000)&&(w != 1) && (w != 2) && (w != 3)){
            printf ("              ОШИБКА\n              ВВОДА!\n\n");
            printf ("Для продолжения введите- 1(start), \nчтобы  завершить  работу c прило-\nжением введите - 2(quit): ");
            scanf ("%ld", &w);
            printf ("\n");
        }
        
        if ((w != 1) && (w != 2) && (w != 3)){
            printf ("              ОШИБКА\n              ВВОДА!\n\n    Приложение завершило работу!\n\n");
            sleep (3);
            return 0;
        }
    }
	return 0;
}
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
