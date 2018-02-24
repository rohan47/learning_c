#include<stdio.h>

struct rohan{
    char name[10];
    char title[10];
    int age;
};

int main(){
    struct rohan rrg;
    printf("Enter name, title, age \n");
    scanf("%s %s %d",rrg.name, rrg.title, &rrg.age);
    printf("%s %s %d",rrg.name, rrg.title, rrg.age);
}
