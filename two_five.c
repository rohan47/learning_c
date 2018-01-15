#include<stdio.h>
#define MAXLINE 1024

int fetchline(char s[], int maxline);
int squeeze(char s[], int c);

int main() {
    char s1[MAXLINE], s2[MAXLINE];
    int c, lengths1, lengths2, i, occ, count;

    count = 0;

    lengths1 = fetchline(s1, MAXLINE);
    lengths2 = fetchline(s2, MAXLINE);
    if (lengths1 > 0 && lengths2 > 0) {
        for (i = 0; s2[i] != '\0' && s2[i] != '\n'; i++) {
            c = s2[i];
            occ = squeeze(s1, c);
            if (occ != -1) {
                putchar(c);
                printf(" : %d\n", occ);
                count += 1;
            }
        }
        if (count == 0)
            printf("%d\n", -1);
        //printf("%s", s2);
        //printf("%s", s1);
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

int squeeze(char s[], int c) {
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return i;
    return -1;
}
