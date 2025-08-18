#include<stdio.h>
int main () {
int L=2,C=2,sum=0;
    int T[L][C];
for (int i=0;i<L;i++){
    for(int j=0;j<C;j++){
        printf("give the value for %d %d: ",i+1,j+1);
        scanf("%d",&T[L][C]);
        sum += T[L][C];
    }
}
printf("the sum is: %d",sum);
return 0;
}
