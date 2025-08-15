#include<stdio.h>
#include<math.h>
int main () {
    char op,add,sub,mult,dev;
    int n1,n2;
printf("which operation you want to use: ");
scanf("%c",&op);
switch(op){
    case '+':
    add = 1;
    printf("you have chosen addition\n");
    break;
    case '-':
    sub = 1;
    printf("you have chosen substraction\n");
    break;
    case 'x':
    mult = 1;
    printf("you have chosen multiplication\n");
    break;
    case '/':
    dev = 1;
    printf("you have chosen devision\n");
    break;
    default:
    printf("Invalid Input!\n");
}
if (add){
    printf("what's are the 2 numbers you need to add: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("the addition is : %d",n1 + n2);
}else if(sub){
    printf("what's are the 2 numbers you need to substract: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("the substraction is : %d",n1 - n2);
}else if(mult){
    printf("what's are the 2 numbers you need to multiply: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("the multiplication is : %d",n1 * n2);
}else if (sub){
    printf("what's are the 2 numbers you need to devide: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("the devision is : %d",n1 / n2);
}
}