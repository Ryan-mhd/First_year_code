#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Appareil{
    int ID_appareil;
    char nom[20];
    char type[20];
    int anciennete;
    char etat[20];
}Appareil;
typedef struct Technicien{
    int ID_technicien;
    char nom[20];
    char prenom[30];
    int ID_appareil_assigne;
}Technicien;
int main (){
    int n,m,i,j;
    printf("combien de technicien y a t'il ?: ");
    scanf("%d",&n);
    printf("combien d'appareil y a t'il?: ");
    scanf("%d",&m);
    Technicien tech[n];
    Appareil app[m];
    for( i=0;i<n;i++){
        tech[i].ID_appareil_assigne = -1;
    }
    for( i=0;i<n;i++){
        printf("ID du %d tech: ",i+1);
        scanf("%d",&tech[i].ID_technicien);
        getchar();
        printf("nom du %d tech: ",i+1);
        fgets(tech[i].nom,sizeof(tech[i].nom),stdin);
        tech[i].nom[strcspn(tech[i].nom, "\n")] != '0';
        printf("prenom du %d tech: ",i+1);
        fgets(tech[i].prenom,sizeof(tech[i].prenom),stdin);
        tech[i].prenom[strcspn(tech[i].prenom, "\n")] != '0';
        tech[i].ID_appareil_assigne = 2;
        break;
    }
    for( j=0;j<m;j++){
        printf("id du %d appareil: ",j+1);
        scanf("%d",&app[j].ID_appareil);
        getchar();
        printf("nom du %d appareil: ",j+1);
        fgets(app[j].nom,sizeof(app[j].nom),stdin);
        app[j].nom[strcspn(app[j].nom, "\n")] ='0';
        printf("type du %d appareil: ",j+1);
        fgets(app[j].type,sizeof(app[j].type),stdin);
        app[j].type[strcspn(app[j].type, "\n")] ='0';    
        printf("etat du %d appareil(en panne/fonctionnel): ",j+1);
        fgets(app[j].etat,sizeof(app[j].etat),stdin);
        app[j].etat[strcspn(app[j].etat, "\n")] ='0';
        printf("anciennete du %d appareil: ",j+1);
        scanf("%d",&app[j].anciennete);
        break;
    }
    /*for(i = 0; i<n ; i++){
        for (j = 0; j < m; j++){
            if(tech[i].ID_appareil_assigne != -1 && app[j].ID_appareil){
                tech[i].ID_appareil_assigne = app[j].ID_appareil;
            }
            if(strcmp(app[i].etat = "en panne")==0 && tech[i].ID_appareil_assigne = true){

            }
        }
    }

    return 0;
}*/