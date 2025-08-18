#include<stdio.h>
#include<string.h>
typedef struct date{
    int jours;
    int mois;
    int annee;
}date;
typedef struct carte{
    char numSC [20];
    char nomASS [20];
    char prenomASS [20];
    float pcRemb;
}carte;
typedef struct med {
    char nomMedic [20];
    float prixMedic;
    int QteMedic;
}med;
int main () {
    int i=0;
    carte Medoc[20];
    do{
            printf("donner moi le numero de la carte (ne pas depasser 20 chifre): ");
            scanf("%d",&Medoc[i].numSC);
            if (Medoc[i].numSC > 20 || Medoc[i].numSC < 0){
                printf("erreur !");
                while(getchar() != '\n');
            }else {

                while(getchar() != '\n');

            printf("donner moi le nom: ");

            fgets(Medoc[i].nomASS,sizeof(Medoc[i].nomASS),stdin);
            Medoc[i].nomASS[strcspn(Medoc[i].nomASS, "\n")] = '\0';
            i++;
        }
        
    }while(i < 20);
}
