#include<stdio.h>

struct student{
    int age;
    float gpa;
    float mark;
    char name[20];
};


int main () {

/*struct student student1 = {17,2.5,15,"ryan"};
printf("name: %s",student1.name);*/

struct student array[3];

struct student student1 = {15,2.5,10,"steven"};
struct student student2 = {14,3.0,8,"mike"};
struct student student3 = {17,5.0,18,"tobias"};
array[0] = student1;
array[1] = student2;
array[2] = student3;
for(int i = 0;i < 3;i++){
    printf("student number %d\n",i+1);
printf("%d \n", array[i].age);
printf("%.2f \n", array[i].gpa);
printf("%.2f \n", array[i].mark);
printf("%s \n", array[i].name);

}

}
