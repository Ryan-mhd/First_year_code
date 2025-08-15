#include<stdio.h>
#include<string.h>
int main () {
int i,j,c,s,find=0;
char chaine[20],sous_chaine[20];
printf("donner moi la chaine: ");
fgets(chaine,sizeof(chaine),stdin);
chaine[strcspn(chaine, "\n")] = '\0';
printf("donner moi la sous chaine: ");
chaine[strcspn(chaine, "\n")] = '\0';
c = strlen(chaine);
s = strlen(sous_chaine);
for(i = 0;i <= c - s;i++){
    for (j=0;j < s;j++){
        if (chaine[j+1] != sous_chaine[j]){
            break;
        }
    }
if (j == s){
    find = 1;
    break;
}
}
if(find){
    printf("il existe");
}else{
    printf("il n'existe pas");
}
return 0;
}