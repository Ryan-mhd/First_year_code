#include<stdio.h>
int main () {

/*for (int j= 0; j <5 ;j++){
    printf("\n");
for (int i= 0 ; i < 5 ; i++){
    printf(" * ");
}
}*/

 for (int i = 0;i < 6;i++)
{
for (int j = 1;j < 6 - i;j++){
printf(" ");
}
for(int k = 1;k <= 2*i -1;k++){
    printf("*");
}
printf("\n");
}
 return 0;
}