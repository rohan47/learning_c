#include<stdio.h>
#include<string.h>
#define MAX 1000

int strrindex(char s[], char t[]);
int fetchline(char s[], int max);

char t[] = "ello";

int main(){
    char s[MAX];
    int index;

    if (fetchline(s, MAX) >0){
        index=strrindex(s,t);
        printf("%d\n",index);
    }
    return 0;
}

int fetchline(char s[], int lim){
    int c,i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strrindex(char s[], char t[]){
    int i,j,k;

    printf("s:%d\nt:%d\n",strlen(s),strlen(t));
    for (i=(strlen(s)-1); i >= 0 ; i--){
        for (j=i, k=(strlen(t)-1); k>=0 && s[j] == t[k]; j--,k--)
            ;
        if (k<0)
            return ++j;
    }
    return -1;
}
