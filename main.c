#include <stdio.h>
#include <math.h>
#include "unitcon.c"

void input(int fn, char str1, char str2, float number)
{
    printf("Какую  величину вы хотите перевести\n(1- Длина,  растояние;  2-Скорость; \n3-Площадь; 4-Время; 5-Объем; 6-Вес)\nВведите число соответствующее вели-\nчине: ");
    scanf("%d", &fn);
    printf("Из чего перевести: ");
    scanf("%s", &str1);
    printf("Во что  перевести: ");
    scanf("%s", &str2);
    printf("Число: ");
    scanf("%f", &number);
    printf ("\n\n");
}

void check (int fn,char str1[],char str2[],char filename[])
{

}

int main() {
    long int w;
    printf ("    ║╔ ╔╗ ║║ ╦╗ ╔═ ╔╗ ╦ ╔═ ╔╗\n    ╠╣ ║║ ╠╣ ╠╣ ╠═ ║║ ║ ╠═ ║║\n    ║╚ ╚╝ ║║ ╩╝ ╚═ ╠╝ ║ ╚═ ╠╝\n\n       ╦╗ ╔═ ╔╗ ║║ ║║ ║║ ║║\n       ╠╣ ╠═ ║║ ║║ ║║ ║║ ╠╣\n       ╩╝ ╚═ ╝║ ╚╝ ╚╣ ╚╝ ║║\n\n"); 
    printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit),  чтобы  узнать\nподробнее  о  приложении  введите \n- 3(about): ");
    scanf ("%ld", &w);
    printf ("\n");
    while (w!=2){
        if (w==3) {
            printf ("Конвертер  величин  -  приложение,\nкоторое переводит  одну  величину\nв другую. Приложение  работает со\nследующими величинами:\n1) Длина,  растояние ( nm, mm, cm,\ndm, m, km)\n2) Скорость (m/s, km/s, km/h)\n3) Площадь(mm2, cm2, dm2, m2, ha)\n4) Время  (sec,  min,  hour,  day,\nweek, month, year)\n5) Объем (mkl, ml, l, m3)\n6) Вес (mkg, mg, g, kg, cwt, t)\n\n");
            printf("Для того чтобы перевести величину \nвведите- 1(start), если вы хотите \nзавершить  работу  с  приложением \nвведите - 2(quit): ");
            scanf ("%ld", &w);
            printf ("\n");            
        }
        if (w==1){
            int fn;
            float number;
            char str1, str2, filename;
            input (fn, str1, str2, number);
            //check (fn, str1, str2, filename);
            //Result(number, str1, str2, filename);
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
