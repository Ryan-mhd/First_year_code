#include<stdio.h>
int Max_2(int a, int b){
    if (a>b) {
        return a;}
    else {
        return b;}
}
int Max_4(int a,int b,int c, int d){
    int max1;
    int max2;
    max1 = Max_2(a,b);
    max2 = Max_2(c,d);
    return Max_2(max1,max2);
} 
int main (){
    int a,b,c,d;
    printf("donner moi 4 variables: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Max_4(a,b,c,d);
    printf("le max est = %d",Max_4(a,b,c,d));
}