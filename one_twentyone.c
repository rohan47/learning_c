/* Program to detab that replaces all tabs with spaces */
#include<stdio.h>
#define TAB 4

int main(){
    char c;
    int i;

    while ((c = getchar()) != EOF){
        if (c == '\t')
            for(i=0; i<TAB; i++)
                putchar(' ');
        else
            putchar(c);
    }
}        
