#include<stdio.h>
#define MAXLINE 1024

int fetchline(char line[], int maxline);
void squeeze(char s[], int c);

int main() {
    char line[MAXLINE];
    int c, length;

    length = fetchline(line, MAXLINE);
    if (length > 0) {
        c = getchar();
        printf("%s", line);
        squeeze(line, c);
        printf("%s", line);
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
