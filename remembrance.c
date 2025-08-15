#include<stdio.h>
int main () {
    int n=20,m=30,Jmax=0,Jmin=100;
    int A[n][m];
    //remplissage du tableau a deux dimention
for(int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        printf("donner la valeur %d %d:",i+1,j+1);
        scanf("%d",&A[i][j]);
            if (A[i][j] > Jmax){
                Jmax = A[i][j];
        }
        if(A[i][j] < Jmin){
            Jmin = A[i][j];
        }
    }
}
printf("le min: %d \n",Jmin);
printf("le max: %d",Jmax);
}