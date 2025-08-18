#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[20];
    char surname[20];
    int mark;
}student;
int main (){
    int i,n;
do {
    printf("donner moi la taille du tableau: ");
    scanf("%d",&n);
    while (getchar() != '\n');
}while (n <0 || n >100);
student array[n];
for (i=0;i<n;i++){
    printf("donner moi le nom du %d etudiant: ",i+1);
    fgets(array[i].name,sizeof(array[i].name),stdin);
    array[i].name[strcspn(array[i].name, "\n")] = '\0';
    printf("donner moi le prenom du %d etudiant: ",i+1);
    fgets(array[i].surname,sizeof(array[i].surname),stdin);
    array[i].surname[strcspn(array[i].surname, "\n")] = '\0';
    printf("donner moi la moyenne du %d etudiant: ",i+1);
    scanf("%d",&array[i].mark);
    while(getchar() != '\n');
    if (array[i].mark >= 10){
        printf("etudiant %s est admit",array[i].name);
    }
}
}
