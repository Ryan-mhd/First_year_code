#include<stdio.h>
#include<string.h>
typedef struct students{
    char name[20];
    char surname[20];
    int age;
    char ID[20];
}students;
void n(int *n){
    do{
    printf("donner moi la taille du tableau(max 20): ");
    scanf("%d",n);
    while(getchar() != '\n');
}while(*n<1 || *n>20);
\
}
int main (){
    int l;
    students student[20];
    n(&l);
    for(int i=0;i<l;i++){

        printf("donner moi le nom de l'etudiant numero %d: ",i+1);
        fgets(student[i].name,sizeof(student[i].name),stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf("donner moi le prénom de l'etudiant numero %d: ",i+1);
        fgets(student[i].surname,sizeof(student[i].surname),stdin);
        student[i].surname[strcspn(student[i].surname, "\n")] = '\0';

        printf("donner moi l'age de l'etudian numéro %d: ",i+1);
        scanf("%d",&student[i].age);

        printf("donner moi le ID de l'etudiant numero %d: ",i+1);
        fgets(student[i].ID,sizeof(student[i].ID),stdin);
        student[i].ID[strcspn(student[i].ID, "\n")] = '\0';
    }
    
    return 0;
}
