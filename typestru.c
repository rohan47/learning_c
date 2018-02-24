#include<stdio.h>

typedef struct{
    char name[10];
    char title[10];
    int age;
} rohan;

int main(){
    rohan rrg;
    printf("Enter name, title, age \n");
    scanf("%s %s %d",rrg.name, rrg.title, &rrg.age);
    printf("%s %s %d",rrg.name, rrg.title, rrg.age);
}

