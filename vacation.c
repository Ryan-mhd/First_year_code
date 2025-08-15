#include<stdio.h>
typedef struct Appareil {
    int ID_appareil;
    char nom;
    char type;
    int anciennete;
    char etat;
}Appareil;
typedef struct technicien{
    int ID_technicien;
    char nom;
    char prenom;
    int ID_appareil_assigne;
};