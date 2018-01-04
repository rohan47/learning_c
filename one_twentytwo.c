/* Program to entab i.e., replaces 8 consecutive space with tabs */
#include<stdio.h>
#define TAB 8

int main(){
    char c;
    int count;

    count = 0;
    while ((c = getchar()) != EOF){
        while (c == ' ' && count < TAB){
            ++count;
            if (count != TAB)
                c = getchar();
        }
        //if (c == ' ')
        //    ++count;
        //printf("%d",count);
        if (count == TAB){
            putchar('\t');
            count = 0;
        }
        while (count != 0){
            putchar(' ');
            --count;
        }
        putchar(c);
    }
}
