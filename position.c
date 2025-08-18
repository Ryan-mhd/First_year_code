#include<stdio.h>
#include<string.h>
struct person{
    char name[20];
    char surname[20];
    int age;
};
int main () {
    int pos=0,n=100;
    int T[100];
 struct person person1;
printf("donner moi le nom: ");
scanf("%s", &person1.name);
printf("donner moi le prenom: ");
scanf("%s", &person1.surname);
printf("donner moi l'age: ");
scanf("%d ", &person1.age);
do{
printf("donner moi la position: ");
scanf("%d",&pos);
if (pos<0 || pos>n){
    printf("erreur \n");
}
}while(pos<0 || pos>n);


}
