#include<stdio.h>
int main () {
    int val,i,n,pos,produit=1;
    int T[n];
    printf("donner moi la taile du tableau: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner moi la %d valeur: ",i+1);
        scanf("%d",&T[i]);
        produit = produit * T[i];
    }
    if (produit < 0){
        produit = produit * (-1);
    }
printf("le produit est : %d \n",produit);
printf("donner moi la valeur: ");
scanf("%d",&val);

if (val == T[i]){
    pos = i;
}
printf("la position est: %d",pos);
}