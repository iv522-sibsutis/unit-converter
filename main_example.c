#include <stdio.h>
#include <math.h>
#include "unitcon.c"

int main() {
    int w;
    printf ("    ║╔ ╔╗ ║║ ╦╗ ╔═ ╔╗ ╦ ╔═ ╔╗\n    ╠╣ ║║ ╠╣ ╠╣ ╠═ ║║ ║ ╠═ ║║\n    ║╚ ╚╝ ║║ ╩╝ ╚═ ╠╝ ║ ╚═ ╠╝\n\n       ╦╗ ╔═ ╔╗ ║║ ║║ ║║ ║║\n       ╠╣ ╠═ ║║ ║║ ║║ ║║ ╠╣\n       ╩╝ ╚═ ╝║ ╚╝ ╚╣ ╚╝ ║║\n\n"); 
    printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit),  чтобы  узнать\nподробнее  о  приложении  введите \n- 3(about): ");
    scanf ("%d", &w);
    printf ("\n");
    while (w!=2){
        if (w==3) {
            printf ("Конвертер  величин  -  приложение,\nкоторое переводит  одну  величину\nв другую. Приложение  работает со\nследующими величинами:\n1) Длина,  растояние ( nm, mm, cm,\ndm, m, km)\n2) Скорость (m/s, km/s, km/h)\n3) Площадь(mm2, cm2, dm2, m2, ha)\n4) Время  (sec,  min,  hour,  day,\nweek, month, year)\n5) Объем (mkl, ml, l, m3)\n6) Вес (mkg, mg, g, kg, cwt, t)\n\n");
            printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit): ");
            scanf ("%d", &w);
            printf ("\n");
            while ((w != 1) && (w != 2) && (w != 3)){
                printf ("Ошибка ввода!\n\n");
                printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit): ");
                scanf ("%d", &w);
                printf ("\n");
               
            }
            
        }
        while (w==1){
            int number;
            char str1[20], str2[20]/*, filename[20]*/;
            printf("Из чего перевести: ");
            scanf("%s", &str1);
            printf("Во что  перевести: ");
            scanf("%s", &str2);
            printf("Число: ");
            scanf("%d", &number);
            printf ("\n\n");
            //scanf("%s", &filename);
            //printf("Check! : %d\n %s\n %s\n %s\n", number, str1, str2, filename);
            //Result(number, str1, str2, filename);
	    printf ("Для продолжения введите- 1(start), \nчтобы  завершить  работу c прило-\nжением введите - 2(quit): ");
            scanf ("%d", &w);
            printf ("\n");
	    while ((w != 1) && (w != 2) && (w != 3)){
                printf ("Ошибка ввода!\n\n");
                printf ("Для продолжения введите- 1(start), \nчтобы  завершить  работу c прило-\nжением введите - 2(quit): ");
                scanf ("%d", &w);
                printf ("\n");
                
            }
            
        }
    }
    return 0;
}
