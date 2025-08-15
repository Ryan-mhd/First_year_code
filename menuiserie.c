#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct panneau{
    float largeur;
    float longeur;
    float epaisseur;
}panneau;
int main () {
    int type;
    do{
    printf("donner moi le type du bois que vous voulez: ");
    printf("0 pour pin, 1 pour chene, 2 pour hetre: ");
    scanf("%d",&type);
}while(type != 0 && type != 1 && type !=2);
panneau pan1;
printf("donner moi la longeur : ");
scanf("%f",&pan1.longeur);
printf("donner moi la largeur : ");
scanf("%f",&pan1.largeur);
printf("donner moi l'epaisseur : ");
scanf("%f",&pan1.epaisseur);
float result = ((pan1.largeur * pan1.epaisseur * pan1.longeur)/pow(10, 9));
printf("le volume est %.2f metres cube",result);
return 0;
}