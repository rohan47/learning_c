/* Program to detab i.e., to replace tab with spaces */
#include<stdio.h>

#define CHARBUFFER  1024
#define TAB         (char)'\t'
#define SPACE       (char)' '
#define TABSIZE     8

int fetchline(char line[], int maxline);
void push(char detabline[], char cr, int count);

int main(){
    char line[CHARBUFFER];
    char detabline[CHARBUFFER];
    int i,j,k,count;

    count=0;

    while ( fetchline(line, CHARBUFFER) > 0 ){
    //printf("ftln%s",line);
        for(i=0; line[i] != '\0'; ++i){
            //putchar(line[i]);
            if(line[i] == TAB){
                for(j=0; j<TABSIZE; ++j){
                    push(detabline, SPACE, count);
                    ++count;
                }   
            }
            push(detabline, line[i], count);
            ++count;
        }
    }
    detabline[count] = '\0';
    //printf("count:%d",count);
    if (count > 0)
        printf("%s", detabline);
    return 0;
}

void push(char detabline[], char ch, int count){
    //putchar(ch);
    //printf("%d",count);
    detabline[count] = ch;
    //putchar(detabline[count]);
}

int fetchline(char line[], int lim){
    int c,i;

    for(i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
