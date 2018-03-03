#include<stdio.h>
#define MAX 1024

void escape(char s[],char t[]){
    int i,j;
    
    for (i=0,j=0; t[i] != '\0' ; i++,j++){
        switch (t[i]) {
            case '\n':
                s[j] = '\\';
                s[++j] = 'n';
                break;
            case '\t':
                s[j] = '\\';
                s[++j] = 't';
                break;
            default:
                s[j] = t[i];
                break;
        }
    }
    s[++j] = '\0';
}

void toescape(char u[],char s[]){
    int i,j;
    
    for (i=0,j=0; s[i] != '\0' ; i++,j++){
        if (s[i] == '\\') {
            switch (s[++i]) {
                case 'n':
                    u[j] = '\n';
                    //j++;
                    break;
                case 't':
                    u[j] = '\t';
                    //j++;
                    break;
                default:
                    u[j] = s[i];
                    //j++;
                    break;
            }   
        }
        else
            u[j] = s[i];
    }
    u[++j] = '\0';
}

int fetchline(char t[], int lim) {
    int i,c;
    for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i )
        t[i] = c;
    if (c == '\n') {
        t[i] = '\n';
        ++i;
    }
    t[i] = '\0';
    return i;
}

int main() {
    char s[MAX], t[MAX], u[MAX];
    
    fetchline(t, MAX); 
    escape(s,t);
    toescape(u,s);
    printf("%s\n",s);
    printf("%s\n",u);
    
    //printf("%s\n",u);

    return 0;
}
