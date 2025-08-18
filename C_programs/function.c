#include <stdio.h>
int fonc(int a, int b){
    int c;
    c = a*b;
    return c;
}
int main (){
    int x,y;
    printf("donner x: ");
    scanf("%d",&x);
    printf("donner y: ");
    scanf("%d",&y);
    fonc(x,y);
    printf("resultat: %d",fonc(x,y));
    return 0;
}
