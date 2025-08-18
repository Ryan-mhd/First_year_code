#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main () {
    int i,j,c,s,find=0;
char chaine[20];
char sous_chaine[20];
printf("give me a name: ");
fgets(chaine,sizeof(chaine),stdin);
chaine[strcspn(chaine, "\n")] = '\0';
printf("give me a character to search in that name: ");
fgets(sous_chaine,sizeof(sous_chaine),stdin);
sous_chaine[strcspn(sous_chaine, "\n")] = '\0';

c = strlen(chaine);
s = strlen(sous_chaine);
for( i=0;i <= c - s;i++){
 for( j=0;j < s;j++){
    if (chaine[j+i] != sous_chaine[j]){
        break;
}
 }
if (j == s ){
    find=1;
    break;
}
}
    if(find){
    printf("we found your requirement!");
}else {
    printf("we didn't fint your requirement!");
}

return 0;
}
