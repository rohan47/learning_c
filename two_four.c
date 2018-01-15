#include<stdio.h>
#define MAXLINE 1024

int fetchline(char s[], int maxline);
void squeeze(char s[], int c);

int main() {
    char s1[MAXLINE], s2[MAXLINE];
    int c, lengths1, lengths2, i;

    lengths1 = fetchline(s1, MAXLINE);
    lengths2 = fetchline(s2, MAXLINE);
    if (lengths1 > 0 && lengths2 > 0) {
        for (i = 0; s2[i] != '\0' ; i++) {
            c = s2[i];
            squeeze(s1, c);
        }
        printf("%s", s2);
        printf("%s", s1);
    }

    return 0;
}

int fetchline(char s[], int limit) {
    int i, c;

    for (i=0; i <= limit && (c=getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
