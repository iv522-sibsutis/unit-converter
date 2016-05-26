#include <stdio.h>
#include <math.h>
#include <string.h>
#include "unitcon.c"

int main() {
    long int w=0;
    float fn=0;
    float number;
    char str1[20], str2[20], *filename;
    printf ("    ║╔ ╔╗ ║║ ╦╗ ╔═ ╔╗ ╦ ╔═ ╔╗\n    ╠╣ ║║ ╠╣ ╠╣ ╠═ ║║ ║ ╠═ ║║\n    ║╚ ╚╝ ║║ ╩╝ ╚═ ╠╝ ║ ╚═ ╠╝\n\n       ╦╗ ╔═ ╔╗ ║║ ║║ ║║ ║║\n       ╠╣ ╠═ ║║ ║║ ║║ ║║ ╠╣\n       ╩╝ ╚═ ╝║ ╚╝ ╚╣ ╚╝ ║║\n\n"); 
    printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit),  чтобы  узнать\nподробнее  о  приложении  введите \n- 3(about): ");
    scanf ("%ld", &w);
    printf ("\n");
    while (w!=2){
        if (w==3) {

            //About
            printf ("Конвертер  величин  -  приложение,\nкоторое переводит  одну  величину\nв другую. Приложение  работает со\nследующими величинами:\n1) Длина,  растояние ( nm, mm, cm,\ndm, m, km)\n2) Скорость (m/s, km/s, km/h)\n3) Площадь(mm2, cm2, dm2, m2, ha)\n4) Время  (sec,  min,  hour,  day,\nweek, month, year)\n5) Объем (mkl, ml, l, m3)\n6) Вес (mkg, mg, g, kg, cwt, t)\n\n");
            printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit): ");
            scanf ("%ld", &w);
            printf ("\n");            
        }

        if (w==1){
            
            //Input
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

            //Result( number, str1, str2, filename);//unitcon.c
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
