#include<stdio.h>
#include<windows.h>
int main () {
int h,m,s,sec =0;
do {
printf ("set time here :)\n ");
printf("hours: ");
scanf("%d",&h);
printf("minutes: ");
scanf("%d",&m);
printf("seconds: ");
scanf("%d",&s);
if (h > 24 || m > 59 || s > 59){
    printf("invalid input! \n");
}
}while (h > 23 || m > 59 || s > 59);
while(1){
printf("\n%02dh:%02dm: %02ds\n",h,m,s);
sec++;
s++;
Sleep (1000);
if(s>59){
    s = 0;
    m++;
    if(m>59){
        m = 0;
        h++;
        if(h>23){
            h = 0;
        }
    }
}
system("cls");

//printf("\ntime passed : %ds",sec);
}
}
