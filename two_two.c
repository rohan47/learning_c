#include<stdio.h>
#define MAXLINE 1000

int fetchline(char line[], int maxline);

int main(){
    char line[MAXLINE];
    
    while (fetchline(line, MAXLINE) > 0)
        printf("%s", line);
    return 0;
}

int fetchline(char line[], int lim){
    int c, i;

    for (i=0; i<lim-1; ++i){
        c=getchar();
        if(c == EOF) 
            break;
        if(c == '\n')
            break;
        line[i]=c;
    }
    if (c == '\n'){
        line[i] =c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
